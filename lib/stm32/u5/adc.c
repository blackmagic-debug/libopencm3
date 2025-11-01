/** @addtogroup adc_file ADC peripheral API
 * @ingroup peripheral_apis
 *
 * @author @htmlonly &copy; @endhtmlonly 2025
 * Rachel Mant <git@dragonmux.network>
 *
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

#include <libopencm3/stm32/adc.h>

/*---------------------------------------------------------------------------*/
/** @brief ADC Disable an External Trigger for Regular Channels

@param[in] adc Unsigned intptr. ADC block register address base @ref
adc_reg_base.
*/

void adc_disable_external_trigger_regular(uintptr_t adc)
{
	ADC_CFGR1(adc) &= ~ADC_CFGR1_EXTEN_MASK;
}

/** @brief ADC Clear the End-of-Sequence Flag for Regular Conversions
 *
 * @param[in] adc Unsigned intptr. ADC block register address base
 * @ref adc_reg_base
 */
void adc_clear_eos(uintptr_t adc)
{
	ADC_ISR(adc) = ADC_ISR_EOS;
}
