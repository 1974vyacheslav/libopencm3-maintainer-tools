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
#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>
#include <libopencm3/stm32/usart.h>
#include "board.h"

#define BOARD_NAME		"Waveshare Open103Z"

/******************************************************************************
 * LED configuration
 ******************************************************************************/

struct pin_config board_leds[] = {
	{	/* LED1 */
		.port = GPIOD,
		.pin = GPIO7,
		.clock = RCC_GPIOD,
	} , {	/* LED2 */
		.port = GPIOD,
		.pin = GPIO13,
		.clock = RCC_GPIOD,
	} , {	/* LED3 */
		.port = GPIOD,
		.pin = GPIO3,
		.clock = RCC_GPIOD,
	} , {	/* LED4 */
		.port = GPIOD,
		.pin = GPIO4,
		.clock = RCC_GPIOD,
	}
};

/******************************************************************************
 * BUTTON configuration
 ******************************************************************************/

struct pin_config board_btns[] = {
	{	/* USER KEY */
		.port = GPIOB,
		.pin = GPIO9,
		.clock = RCC_GPIOB,
	}
};

/******************************************************************************
 * Serial port configuration
 ******************************************************************************/

struct usart_config board_usarts[] = {
};