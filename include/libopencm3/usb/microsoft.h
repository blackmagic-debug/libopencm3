/** @defgroup usb_microsoft_defines USB Microsoft OS Descriptors Type Definitions

@brief <b>Defined Constants and Types for the USB Microsoft OS Descriptors Type Definitions</b>

@ingroup USB_defines

@version 1.0.0

@author @htmlonly &copy; @endhtmlonly 2022
Rachel Mant <git@dragonmux.network>

@date 11 August 2022

LGPL License Terms @ref lgpl_license
*/

/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2022 Rachel Mant <git@dragonmux.network>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

/**@{*/

#ifndef __MICROSOFT_H
#define __MICROSOFT_H

#include <libopencm3/usb/bos.h>

enum microsoft_req {
	MICROSOFT_GET_DESCRIPTOR_SET = 7,
	MICROSOFT_SET_ALTERNATE_ENUM = 8,
};

enum microsoft_os_descriptor_types {
	MICROSOFT_OS_SET_HEADER = 0,
	MICROSOFT_OS_SUBSET_HEADER_CONFIGURATION = 1,
	MICROSOFT_OS_SUBSET_HEADER_FUNCTION = 2,
	MICROSOFT_OS_FEATURE_COMPATIBLE_ID = 3,
	MICROSOFT_OS_FEATURE_REG_PROPERTY = 4,
	MICROSOFT_OS_FEATURE_MIN_RESUME_TIME = 5,
	MICROSOFT_OS_FEATURE_MODEL_ID = 6,
	MICROSOFT_OS_FEATURE_CCGP_DEVICE = 7,
	MICROSOFT_OS_FEATURE_VENDOR_REVISION = 8,
};

enum microsoft_registry_types {
	REG_SZ = 1,
	REG_EXPAND_SZ = 2,
	REG_BINARY = 3,
	REG_DWORD_LITTLE_ENDIAN = 4,
	REG_DWORD_BIG_ENDIAN = 5,
	REG_LINK = 6,
	REG_MULTI_SZ = 7,
};

#define MICROSOFT_OS_DESCRIPTOR_PLATFORM_CAPABILITY_ID \
{ \
	0xd8dd60dfU, \
	0x4589U, \
	0x4cc7U, \
	0xd29cU, \
	{0x65U, 0x9dU, 0x9eU, 0x64U, 0x8aU, 0x9fU}, \
}

#endif

/**@}*/
