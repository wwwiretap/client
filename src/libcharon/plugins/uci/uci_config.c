/*
 * Copyright (C) 2008 Thomas Kallenberg
 * Copyright (C) 2008 Tobias Brunner
 * Copyright (C) 2008 Martin Willi
 * Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#define _GNU_SOURCE
#include <string.h>

#include "uci_config.h"
#include "uci_parser.h"

#include <daemon.h>

typedef struct private_uci_config_t private_uci_config_t;

/**
 * Private data of an uci_config_t object
 */
struct private_uci_config_t {

	/**
	 * Public part
	 */
	uci_config_t public;

	/**
	 * UCI parser context
	 */
	uci_parser_t *parser;
};

/**
 * enumerator implementation for create_peer_cfg_enumerator
 */
typedef struct {
	/** implements enumerator */
	enumerator_t public;
	/** currently enumerated peer config */
	peer_cfg_t *peer_cfg;
	/** inner uci_parser section enumerator */
	enumerator_t *inner;
} peer_enumerator_t;

/**
 * create a proposal from a string, with fallback to default
 */
static proposal_t *create_proposal(char *string, protocol_id_t proto)
{
	proposal_t *proposal = NULL;

	if (string)
	{
		proposal = proposal_create_from_string(proto, string);
	}
	if (!proposal)
	{	/* UCI default is aes/sha1 only */
		if (proto == PROTO_IKE)
		{
			proposal = proposal_create_from_string(proto,
								"aes128-aes192-aes256-sha1-modp1536-modp2048");
		}
		else
		{
			proposal = proposal_create_from_string(proto,
								"aes128-aes192-aes256-sha1");
		}
	}
	return proposal;
}

/**
 * create an traffic selector, fallback to dynamic
 */
static traffic_selector_t *create_ts(char *string)
{
	if (string)
	{
		traffic_selector_t *ts;

		ts = traffic_selector_create_from_cidr(string, 0, 0);
		if (ts)
		{
			return ts;
		}
	}
	return traffic_selector_create_dynamic(0, 0, 65535);
}

/**
 * create a rekey time from a string with hours, with fallback
 */
static u_int create_rekey(char *string)
{
	u_int rekey = 0;

	if (string)
	{
		rekey = atoi(string);
		if (rekey)
		{
			return rekey * 3600;
		}
	}
	/* every 12 hours */
	return 12 * 3600;
}

METHOD(enumerator_t, peer_enumerator_enumerate, bool,
	peer_enumerator_t *this, peer_cfg_t **cfg)
{
	char *name, *ike_proposal, *esp_proposal, *ike_rekey, *esp_rekey;
	char *local_id, *local_addr, *local_net;
	char *remote_id, *remote_addr, *remote_net;
	child_cfg_t *child_cfg;
	ike_cfg_t *ike_cfg;
	auth_cfg_t *auth;
	lifetime_cfg_t lifetime = {
		.time = {
			.life = create_rekey(esp_rekey) + 300,
			.rekey = create_rekey(esp_rekey),
			.jitter = 300
		}
	};

	/* defaults */
	name = "unnamed";
	local_id = NULL;
	remote_id = NULL;
	local_addr = "0.0.0.0";
	remote_addr = "0.0.0.0";
	local_net = NULL;
	remote_net = NULL;
	ike_proposal = NULL;
	esp_proposal = NULL;
	ike_rekey = NULL;
	esp_rekey = NULL;

	if (this->inner->enumerate(this->inner, &name, &local_id, &remote_id,
			&local_addr, &remote_addr, &local_net, &remote_net,
			&ike_proposal, &esp_proposal, &ike_rekey, &esp_rekey))
	{
		DESTROY_IF(this->peer_cfg);
		ike_cfg = ike_cfg_create(IKEV2, FALSE, FALSE,
								 local_addr, FALSE,
								 charon->socket->get_port(charon->socket, FALSE),
								 remote_addr, FALSE, IKEV2_UDP_PORT);
		ike_cfg->add_proposal(ike_cfg, create_proposal(ike_proposal, PROTO_IKE));
		this->peer_cfg = peer_cfg_create(
					name, ike_cfg, CERT_SEND_IF_ASKED, UNIQUE_NO,
					1, create_rekey(ike_rekey), 0,  /* keytries, rekey, reauth */
					1800, 900,						/* jitter, overtime */
					TRUE, FALSE,				/* mobike, aggressive */
					60, 0,						/* DPD delay, timeout */
					FALSE, NULL, NULL);			/* mediation, med by, peer id */
		auth = auth_cfg_create();
		auth->add(auth, AUTH_RULE_AUTH_CLASS, AUTH_CLASS_PSK);
		auth->add(auth, AUTH_RULE_IDENTITY,
				  identification_create_from_string(local_id));
		this->peer_cfg->add_auth_cfg(this->peer_cfg, auth, TRUE);

		auth = auth_cfg_create();
		auth->add(auth, AUTH_RULE_AUTH_CLASS, AUTH_CLASS_PSK);
		if (remote_id)
		{
			auth->add(auth, AUTH_RULE_IDENTITY,
					  identification_create_from_string(remote_id));
		}
		this->peer_cfg->add_auth_cfg(this->peer_cfg, auth, FALSE);

		child_cfg = child_cfg_create(name, &lifetime, NULL, TRUE, MODE_TUNNEL,
									 ACTION_NONE, ACTION_NONE, ACTION_NONE,
									 FALSE, 0, 0, NULL, NULL, 0);
		child_cfg->add_proposal(child_cfg, create_proposal(esp_proposal, PROTO_ESP));
		child_cfg->add_traffic_selector(child_cfg, TRUE, create_ts(local_net));
		child_cfg->add_traffic_selector(child_cfg, FALSE, create_ts(remote_net));
		this->peer_cfg->add_child_cfg(this->peer_cfg, child_cfg);
		*cfg = this->peer_cfg;
		return TRUE;
	}
	return FALSE;
}


METHOD(enumerator_t, peer_enumerator_destroy, void,
	peer_enumerator_t *this)
{
	DESTROY_IF(this->peer_cfg);
	this->inner->destroy(this->inner);
	free(this);
}

METHOD(backend_t, create_peer_cfg_enumerator, enumerator_t*,
	private_uci_config_t *this, identification_t *me, identification_t *other)
{
	peer_enumerator_t *e;

	INIT(e,
		.public = {
			.enumerate = (void*)_peer_enumerator_enumerate,
			.destroy = _peer_enumerator_destroy,
		},
		.inner = this->parser->create_section_enumerator(this->parser,
					"local_id", "remote_id", "local_addr", "remote_addr",
					"local_net", "remote_net", "ike_proposal", "esp_proposal",
					"ike_rekey", "esp_rekey", NULL),
	);
	if (!e->inner)
	{
		free(e);
		return NULL;
	}
	return &e->public;
}

/**
 * enumerator implementation for create_ike_cfg_enumerator
 */
typedef struct {
	/** implements enumerator */
	enumerator_t public;
	/** currently enumerated ike config */
	ike_cfg_t *ike_cfg;
	/** inner uci_parser section enumerator */
	enumerator_t *inner;
} ike_enumerator_t;

METHOD(enumerator_t, ike_enumerator_enumerate, bool,
	ike_enumerator_t *this, ike_cfg_t **cfg)
{
	char *local_addr, *remote_addr, *ike_proposal;

	/* defaults */
	local_addr = "0.0.0.0";
	remote_addr = "0.0.0.0";
	ike_proposal = NULL;

	if (this->inner->enumerate(this->inner, NULL,
							   &local_addr, &remote_addr, &ike_proposal))
	{
		DESTROY_IF(this->ike_cfg);
		this->ike_cfg = ike_cfg_create(IKEV2, FALSE, FALSE,
								local_addr, FALSE,
								charon->socket->get_port(charon->socket, FALSE),
								remote_addr, FALSE, IKEV2_UDP_PORT);
		this->ike_cfg->add_proposal(this->ike_cfg,
									create_proposal(ike_proposal, PROTO_IKE));

		*cfg = this->ike_cfg;
		return TRUE;
	}
	return FALSE;
}

METHOD(enumerator_t, ike_enumerator_destroy, void,
	ike_enumerator_t *this)
{
	DESTROY_IF(this->ike_cfg);
	this->inner->destroy(this->inner);
	free(this);
}

METHOD(backend_t, create_ike_cfg_enumerator, enumerator_t*,
	private_uci_config_t *this, host_t *me, host_t *other)
{
	ike_enumerator_t *e;

	INIT(e,
		.public = {
			.enumerate = (void*)_ike_enumerator_enumerate,
			.destroy = _ike_enumerator_destroy,
		},
		.inner = this->parser->create_section_enumerator(this->parser,
							"local_addr", "remote_addr", "ike_proposal", NULL),
	);
	if (!e->inner)
	{
		free(e);
		return NULL;
	}
	return &e->public;
}

METHOD(backend_t, get_peer_cfg_by_name, peer_cfg_t*,
	private_uci_config_t *this, char *name)
{
	enumerator_t *enumerator;
	peer_cfg_t *current, *found = NULL;

	enumerator = create_peer_cfg_enumerator(this, NULL, NULL);
	if (enumerator)
	{
		while (enumerator->enumerate(enumerator, &current))
		{
			if (streq(name, current->get_name(current)))
			{
				found = current->get_ref(current);
				break;
			}
		}
		enumerator->destroy(enumerator);
	}
	return found;
}

METHOD(uci_config_t, destroy, void,
	private_uci_config_t *this)
{
	free(this);
}

/**
 * Described in header.
 */
uci_config_t *uci_config_create(uci_parser_t *parser)
{
	private_uci_config_t *this;

	INIT(this,
		.public = {
			.backend = {
				.create_peer_cfg_enumerator = _create_peer_cfg_enumerator,
				.create_ike_cfg_enumerator = _create_ike_cfg_enumerator,
				.get_peer_cfg_by_name = _get_peer_cfg_by_name,
			},
			.destroy = _destroy,
		},
		.parser = parser,
	);

	return &this->public;
}

