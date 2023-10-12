/* SPDX-License-Identifier: GPL-2.0-or-later */
#pragma once

/* USB Device descriptor parameter */
//#define VENDOR_ID       0xFEED
//#define PRODUCT_ID      0x0000
//#define DEVICE_VER      0x0001
//#define MANUFACTURER    Keebot
//#define PRODUCT         BotpadV3

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { GP10, GP12, GP13, GP21 }
#define MATRIX_COL_PINS { GP18, GP16, GP11 }

#define DIODE_DIRECTION COL2ROW

// If encoder present 
#define ENCODERS_PAD_A { GP20 }
#define ENCODERS_PAD_B { GP19 }

#define WS2812_DI_PIN GP17
#ifdef WS2812_DI_PIN
	//#define RGBLIGHT_ANIMATIONS
	#define RGBLIGHT_EFFECT_ALTERNATING
    	#define RGBLIGHT_EFFECT_BREATHING
    	#define RGBLIGHT_EFFECT_STATIC_GRADIENT
    	#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    	#define RGBLIGHT_EFFECT_SNAKE
	#define RGBLED_NUM 9
	#define RGBLIGHT_LIMIT_VAL 80
	#define RGBLIGHT_HUE_STEP 8
	#define RGBLIGHT_SAT_STEP 8
	#define RGBLIGHT_VAL_STEP 8
#endif

#ifdef OLED_ENABLE
	#define OLED_DISPLAY_128X32
	#define I2C_DRIVER I2C1
	#define I2C1_SCL_PIN GP23
	#define I2C1_SDA_PIN GP22
#endif

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT

#define DISABLE_LEADER