/*
Copyright 2016 Evan Power <evanpower@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xC1ED
#define PRODUCT_ID      0x2312
#define DEVICE_VER      0x0001
#define MANUFACTURER    Dorkyboard
#define PRODUCT         Dorkyboard 104 v0.1
#define DESCRIPTION     QMK keyboard firmware for Dorkyboard

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 10

// ROWS: Top to bottom, COLS: Left to right
/* Row pin configuration
* row: 0  1  2  3  4  5  6  7  8  9  10 11
* pin: B6 D0 C6 D1 C7 D2 E2 D3 F7 D5 F6 B7
*/
#define MATRIX_ROW_PINS { B6, D0, C6, D1, C7, D2, E2, D3, F7, D5, F6, B7 }
/* Column pin configuration
 * col: 0  1  2  3  4  5  6  7  8  9
 * pin: E6 F0 F1 F4 F5 B5 B4 D7 D6 D4
 */
#define MATRIX_COL_PINS { E6, F0, F1, F4, F5, B5, B4, D7, D6, D4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Number of backlighting levels */
#define BACKLIGHT_LEVELS 0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* Underlight configuration
 */
//#define RGB_DI_PIN F6
//#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0     // Number of LEDs
//#define RGBLIGHT_HUE_STEP 10
//#define RGBLIGHT_SAT_STEP 17
//#define RGBLIGHT_VAL_STEP 17

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* Debug forcibly enabled */
#define ALWAYS_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
#define NO_ACTION_LAYER
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#endif
