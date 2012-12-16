/*
 * Copyright (C) 2012 Andreas Steffen
 * HSR Hochschule fuer Technik Rapperswil
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
 * @defgroup ita_attr_dummyt ita_attr_dummy
 * @{ @ingroup ita_attr_dummy
 */

#ifndef ITA_ATTR_DUMMY_H_
#define ITA_ATTR_DUMMY_H_

typedef struct ita_attr_dummy_t ita_attr_dummy_t;

#include "pa_tnc/pa_tnc_attr.h"

/**
 * Class implementing the ITA Dummy PA-TNC attribute.
 *
 */
struct ita_attr_dummy_t {

	/**
	 * Public PA-TNC attribute interface
	 */
	pa_tnc_attr_t pa_tnc_attribute;

	/**
	 * Get the size the ITA Dummy attribute value
	 *
	 * @return				size of dummy attribute value
	 */
	int (*get_size)(ita_attr_dummy_t *this);
};

/**
 * Creates an ita_attr_dummy_t object with a given size
 *
 * @param size				size of dummy attribute value 
 */
pa_tnc_attr_t* ita_attr_dummy_create(int size);

/**
 * Creates an ita_attr_dummy_t object from received data
 *
 * @param command			ITA command string
 */
pa_tnc_attr_t* ita_attr_dummy_create_from_data(chunk_t value);

#endif /** ITA_ATTR_DUMMY_H_ @}*/
