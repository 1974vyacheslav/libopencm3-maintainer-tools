/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2014 Frantisek Burian <BuFran@seznam.cz>
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
#ifndef __STM32VLDISCOVERY_H__
#define __STM32VLDISCOVERY_H__

#define BOARD_NAME		"STM32VL-Discovery"

/******************************************************************************
 * LED configuration
 ******************************************************************************/

struct pin_config board_leds[] = {
	{	/* LD4 Blue */
		.port = GPIOC,
		.pin = GPIO8,
		.clock = RCC_GPIOC,
	} , {	/* LD3 Green */
		.port = GPIOC,
		.pin = GPIO9,
		.clock = RCC_GPIOC,
	}
};

#define BOARD_NLEDS	sizeof(board_leds) / sizeof(struct pin_config)

#define BOARD_LED_GREEN		1
#define BOARD_LED_BLUE		0

/******************************************************************************
 * Serial port configuration
 ******************************************************************************/


#endif /* __STM32VLDISCOVERY_H__ */