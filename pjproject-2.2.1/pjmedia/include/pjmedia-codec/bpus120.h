/* $Id$ */
/*
 * Copyright (C) 2009 Samuel Vinson <samuelv0304@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#ifndef __PJMEDIA_BPUS120_H__
#define __PJMEDIA_BPUS120_H__

/**
 * @file opus.h
 * @brief BPUS120 Codec
+ */

#include <pjmedia-codec/types.h>

/**
 * @defgroup PJMED_BPUS120 BPUS120
 * @ingroup PJMEDIA_CODEC
 * @brief Standard BPUS120 codec.
 * @{
 * This section describes functions to register and register G.729 codec
 * factory to the codec manager. After the codec factory has been registered,
 * application can use @ref PJMEDIA_CODEC API to manipulate the codec.
 */

PJ_BEGIN_DECL


/**
 * Initialize and register BPUS120 codec factory to pjmedia endpoint.
 *
 * @param endpt		The pjmedia endpoint.
 *
 * @return		PJ_SUCCESS on success.
 */
PJ_DECL(pj_status_t) pjmedia_codec_bpus120_init(pjmedia_endpt *endpt);



/**
 * Unregister BPUS120 codec factory from pjmedia endpoint.
 *
 * @return	    PJ_SUCCESS on success.
 */
PJ_DECL(pj_status_t) pjmedia_codec_bpus120_deinit(void);


PJ_END_DECL

/**
 * @}
 */

#endif	/* __PJMEDIA_BPUS120_H__ */
