/*
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

/**
 * @defgroup builder builder
 * @{ @ingroup credentials
 */

#ifndef BUILDER_H_
#define BUILDER_H_

#include <stdarg.h>

typedef enum builder_part_t builder_part_t;

/**
 * Constructor function to build credentials.
 *
 * Any added parts are cloned/refcounted by the builder implementation.
 * Callers may need to free the passed resources themselves.
 *
 * @param subtype	constructor specific subtype, e.g. a certificate_type_t
 * @param args		list of builder part types, followed by parts, BUILD_END
 * @return			builder specific credential, NULL on error
 */
typedef void* (*builder_function_t)(int subtype, va_list args);

#include <library.h>

/**
 * Parts to build credentials from.
 */
enum builder_part_t {
	/** path to a file encoded in any format, char* */
	BUILD_FROM_FILE,
	/** file descriptor to read data, encoded in any format, int */
	BUILD_FROM_FD,
	/** unix socket of a ssh/pgp agent, char* */
	BUILD_AGENT_SOCKET,
	/** DER encoded ASN.1 blob, chunk_t */
	BUILD_BLOB_ASN1_DER,
	/** PEM encoded ASN.1/PGP blob, chunk_t */
	BUILD_BLOB_PEM,
	/** OpenPGP key blob, chunk_t */
	BUILD_BLOB_PGP,
	/** DNS public key blob (RFC 4034, RSA specifc RFC 3110), chunk_t */
	BUILD_BLOB_DNSKEY,
	/** parameters from algorithmIdentifier (ASN.1 blob), chunk_t */
	BUILD_BLOB_ALGID_PARAMS,
	/** key size in bits, as used for key generation, u_int */
	BUILD_KEY_SIZE,
	/** private key to use for signing, private_key_t* */
	BUILD_SIGNING_KEY,
	/** certificate used for signing, certificate_t* */
	BUILD_SIGNING_CERT,
	/** public key to include, public_key_t* */
	BUILD_PUBLIC_KEY,
	/** subject for e.g. certificates, identification_t* */
	BUILD_SUBJECT,
	/** additional subject names, linked_list_t* containing identification_t* */
	BUILD_SUBJECT_ALTNAMES,
	/** issuer for e.g. certificates, identification_t* */
	BUILD_ISSUER,
	/** additional issuer names, linked_list_t* containing identification_t* */
	BUILD_ISSUER_ALTNAMES,
	/** notBefore, time_t* */
	BUILD_NOT_BEFORE_TIME,
	/** notAfter, time_t* */
	BUILD_NOT_AFTER_TIME,
	/** a serial number in binary form, chunk_t */
	BUILD_SERIAL,
	/** digest algorithm to be used for signature, int */
	BUILD_DIGEST_ALG,
	/** a comma-separated list of ietf group attributes, char* */
	BUILD_IETF_GROUP_ATTR,
	/** a ca certificate, certificate_t* */
	BUILD_CA_CERT,
	/** a certificate, certificate_t* */
	BUILD_CERT,
	/** CRL distribution point URIs, x509_cdp_t* */
	BUILD_CRL_DISTRIBUTION_POINTS,
	/** OCSP AuthorityInfoAccess locations, linked_list_t* containing char* */
	BUILD_OCSP_ACCESS_LOCATIONS,
	/** certificate path length constraint */
	BUILD_PATHLEN,
	/** permitted X509 name constraints, linked_list_t* of identification_t* */
	BUILD_PERMITTED_NAME_CONSTRAINTS,
	/** excluded X509 name constraints, linked_list_t* of identification_t* */
	BUILD_EXCLUDED_NAME_CONSTRAINTS,
	/** certificatePolicy OIDs, linked_list_t* of x509_cert_policy_t* */
	BUILD_CERTIFICATE_POLICIES,
	/** policyMapping OIDs, linked_list_t* of x509_policy_mapping_t* */
	BUILD_POLICY_MAPPINGS,
	/** requireExplicitPolicy constraint, int */
	BUILD_POLICY_REQUIRE_EXPLICIT,
	/** inhibitPolicyMapping constraint, int */
	BUILD_POLICY_INHIBIT_MAPPING,
	/** inhibitAnyPolicy constraint, int */
	BUILD_POLICY_INHIBIT_ANY,
	/** enforce an additional X509 flag, x509_flag_t */
	BUILD_X509_FLAG,
	/** enumerator_t over (chunk_t serial, time_t date, crl_reason_t reason) */
	BUILD_REVOKED_ENUMERATOR,
	/** Base CRL serial for a delta CRL, chunk_t, */
	BUILD_BASE_CRL,
	/** PKCS#10 challenge password */
	BUILD_CHALLENGE_PWD,
	/** friendly name of a PKCS#11 module, null terminated char* */
	BUILD_PKCS11_MODULE,
	/** slot specifier for a token in a PKCS#11 module, int */
	BUILD_PKCS11_SLOT,
	/** key ID of a key on a token, chunk_t */
	BUILD_PKCS11_KEYID,
	/** modulus (n) of a RSA key, chunk_t */
	BUILD_RSA_MODULUS,
	/** public exponent (e) of a RSA key, chunk_t */
	BUILD_RSA_PUB_EXP,
	/** private exponent (d) of a RSA key, chunk_t */
	BUILD_RSA_PRIV_EXP,
	/** prime 1 (p) of a RSA key (p < q), chunk_t */
	BUILD_RSA_PRIME1,
	/** prime 2 (q) of a RSA key (p < q), chunk_t */
	BUILD_RSA_PRIME2,
	/** exponent 1 (exp1) of a RSA key, chunk_t */
	BUILD_RSA_EXP1,
	/** exponent 2 (exp1) of a RSA key, chunk_t */
	BUILD_RSA_EXP2,
	/** coefficient (coeff) of a RSA key, chunk_t */
	BUILD_RSA_COEFF,
	/** generate (p) and (q) as safe primes */
	BUILD_SAFE_PRIMES,
	/** number of private key shares */
	BUILD_SHARES,
	/** minimum number of participating private key shares */
	BUILD_THRESHOLD,
	/** end of variable argument builder list */
	BUILD_END,
};

/**
 * enum names for build_part_t
 */
extern enum_name_t *builder_part_names;

#endif /** BUILDER_H_ @}*/
