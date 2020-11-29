/*
Copyright 2020 MechMerlin

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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4B50 // "KP"
#define PRODUCT_ID      0xEF8C
#define DEVICE_VER      0x0001
#define MANUFACTURER    KP Republic
#define PRODUCT         BM60 RGB
#define DESCRIPTION     A 60% hotswap inswitch rgb board

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */

//                         0   1   2   3   4   5   6   7   8   9   A   B   C   D
#define MATRIX_ROW_PINS { B0, B1, B2, B3, E6 }
#define MATRIX_COL_PINS { D0, D1, D2, D3, D5, D4, D6, D7, B4, B5, B6, C6, C7, F7 }

#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN E2
#define DRIVER_LED_TOTAL 63
//#define DRIVER_LED_TOTAL 69

#ifdef RGB_DI_PIN
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
    #define RGBLED_NUM 69
    #define RGB_MATRIX_KEYPRESSES
    #define RGB_MATRIX_STARTUP_HUE 0
    #define RGB_MATRIX_STARTUP_SAT 255
    #define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT // Sets the default mode, if none has been set
    #define RGB_MATRIX_STARTUP_SPD 127
    #define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
    #define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
    #define RGB_DISABLE_TIMEOUT 0 // number of milliseconds to wait until rgb automatically turns off
    #define RGB_DISABLE_WHEN_USB_SUSPENDED true
    //#define RGB_MATRIX_DISABLE_KEYCODES // disables control of rgb matrix by keycodes (must use code functions to control the feature)
#endif

// generated by KBFirmware JSON to QMK Parser
// https://noroadsleft.github.io/kbf_qmk_converter/
