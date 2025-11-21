/** @addtogroup flash_file FLASH peripheral API
 * @ingroup peripheral_apis
 */

/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2025 Rachel Mant <git@dragonmux.network>
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

#include <libopencm3/stm32/flash.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))

void flash_set_ws(const uint32_t wait_states)
{
	/* Read the current ACR value and mask out the wait states component */
	const uint32_t reg32 = FLASH_ACR & ~(FLASH_ACR_LATENCY_MASK << FLASH_ACR_LATENCY_SHIFT);
	/* Write back the new value, with the new wait states shifted in to place */
	FLASH_ACR = reg32 | (wait_states << FLASH_ACR_LATENCY_SHIFT);
}
