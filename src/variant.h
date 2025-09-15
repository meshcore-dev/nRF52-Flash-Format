/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_NRF52840_
#define _VARIANT_NRF52840_

#define NRF52840

/** Master clock frequency */
#define VARIANT_MCK (64000000ul)
#define USE_LFXO // Board uses 32khz crystal for LF

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT (48)
#define NUM_DIGITAL_PINS (48)
#define NUM_ANALOG_INPUTS (6)
#define NUM_ANALOG_OUTPUTS (0)

#define LED_BUILTIN (-1)
#define PIN_SERIAL1_RX (-1)
#define PIN_SERIAL1_TX (-1)
#define LED_STATE_ON LOW

// Placeholder pins to allow CustomLFS to compile
#define SPI_INTERFACES_COUNT    (1)
#define PIN_SPI_MOSI            (255)
#define PIN_SPI_MISO            (255)
#define PIN_SPI_SCK             (255)

#ifdef __cplusplus
}
#endif

#endif
