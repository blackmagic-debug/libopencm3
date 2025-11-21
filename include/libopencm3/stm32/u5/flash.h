/** @defgroup flash_defines FLASH Defines
 * @brief <b>Defined Constants and Types for the STM32U5xx Flash
 * controller</b>
 * @ingroup STM32U5xx_defines
 *
 * @author @htmlonly &copy; @endhtmlonly 2025
 * Rachel Mant <git@dragonmux.network>
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

#ifndef LIBOPENCM3_FLASH_H
#define LIBOPENCM3_FLASH_H

#include <stdint.h>

#define FLASH_FPEC1_BASE (FLASH_MEM_INTERFACE_BASE + 0x000U)

/** @defgroup flash_registers Flash Registers
 * @ingroup flash_defines
@{*/
/** Flash Access Control register */
#define FLASH_ACR MMIO32(FLASH_FPEC1_BASE + 0x000U)
/**@}*/

/** @defgroup flash_latency FLASH Wait States
@ingroup flash_defines
@{*/
#define FLASH_ACR_LATENCY(w)   ((w) & FLASH_ACR_LATENCY_MASK)
#define FLASH_ACR_LATENCY_0WS  FLASH_ACR_LATENCY(0U)
#define FLASH_ACR_LATENCY_1WS  FLASH_ACR_LATENCY(1U)
#define FLASH_ACR_LATENCY_2WS  FLASH_ACR_LATENCY(2U)
#define FLASH_ACR_LATENCY_3WS  FLASH_ACR_LATENCY(3U)
#define FLASH_ACR_LATENCY_4WS  FLASH_ACR_LATENCY(4U)
#define FLASH_ACR_LATENCY_5WS  FLASH_ACR_LATENCY(5U)
#define FLASH_ACR_LATENCY_6WS  FLASH_ACR_LATENCY(6U)
#define FLASH_ACR_LATENCY_7WS  FLASH_ACR_LATENCY(7U)
#define FLASH_ACR_LATENCY_8WS  FLASH_ACR_LATENCY(8U)
#define FLASH_ACR_LATENCY_9WS  FLASH_ACR_LATENCY(9U)
#define FLASH_ACR_LATENCY_10WS FLASH_ACR_LATENCY(10U)
#define FLASH_ACR_LATENCY_11WS FLASH_ACR_LATENCY(11U)
#define FLASH_ACR_LATENCY_12WS FLASH_ACR_LATENCY(12U)
#define FLASH_ACR_LATENCY_13WS FLASH_ACR_LATENCY(13U)
#define FLASH_ACR_LATENCY_14WS FLASH_ACR_LATENCY(14U)
#define FLASH_ACR_LATENCY_15WS FLASH_ACR_LATENCY(15U)
/**@}*/
#define FLASH_ACR_LATENCY_SHIFT 0U
#define FLASH_ACR_LATENCY_MASK  0x0fU

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

/** Set the Number of Wait States.
 *
 * Used to match the system clock to the FLASH memory access time. See the
 * programming manual for more information on clock speed ranges. The latency must
 * be changed to the appropriate value <b>before</b> any increase in clock
 * speed, or <b>after</b> any decrease in clock speed.
 *
 * @param[in] wait_states values from @ref flash_latency.
 */
void flash_set_ws(uint32_t wait_states);

END_DECLS
/**@}*/

#endif
