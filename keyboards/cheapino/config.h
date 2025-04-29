// Copyright 2023 Thomas Haukland (@tompi)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include_next <mcuconf.h> // for i2c
#undef RP_I2C_USE_I2C0
#define RP_I2C_USE_I2C0 TRUE
#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C1 FALSE

#undef I2C_DRIVER
#define I2C_DRIVER I2CD0
#undef I2C1_SDA_PIN
#define I2C1_SDA_PIN GP10
#undef I2C1_SCL_PIN
#define I2C1_SCL_PIN GP11
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral
//#define WS2812_TRST_US 80
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB


// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 230


#define WS2812_DI_PIN GP16 // The pin connected to the data pin of the LEDs
#define RGBLIGHT_LED_COUNT 1                     // The number of LEDs connected


#define MAX_DEFERRED_EXECUTORS 32

// #define DEBUG_MATRIX_SCAN_RATE

#define RGBLIGHT_DEFAULT_HUE 128 // Sets the default hue value, if none has been set
#define RGBLIGHT_DEFAULT_SAT 128 // Sets the default saturation value, if none has been set
#define RGBLIGHT_DEFAULT_VAL 32 // Sets the default brightness value, if none has been set
                                   //
