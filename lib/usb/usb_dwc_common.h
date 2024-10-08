/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2011 Gareth McMullin <gareth@blacksphere.co.nz>
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

#ifndef USB_DWC_COMMON_H
#define USB_DWC_COMMON_H

#include <libopencm3/cm3/common.h>

BEGIN_DECLS

void dwc_set_address(usbd_device *usbd_dev, uint8_t addr);
void dwc_ep_setup(usbd_device *usbd_dev, uint8_t addr, uint8_t type,
			uint16_t max_size,
			void (*callback)(usbd_device *usbd_dev, uint8_t ep));
void dwc_endpoints_reset(usbd_device *usbd_dev);
void dwc_ep_stall_set(usbd_device *usbd_dev, uint8_t addr, uint8_t stall);
uint8_t dwc_ep_stall_get(usbd_device *usbd_dev, uint8_t addr);
void dwc_ep_nak_set(usbd_device *usbd_dev, uint8_t addr, uint8_t nak);
uint16_t dwc_ep_write_packet(usbd_device *usbd_dev, uint8_t addr,
				   const void *buf, uint16_t len);
uint16_t dwc_ep_read_packet(usbd_device *usbd_dev, uint8_t addr,
				  void *buf, uint16_t len);
void dwc_poll(usbd_device *usbd_dev);
void dwc_disconnect(usbd_device *usbd_dev, bool disconnected);

END_DECLS

#endif /* USB_DWC_COMMON_H */
