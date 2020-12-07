/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define EE_HANDS

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
#endif

#ifdef RGBLIGHT_ENABLE
  #define RGBLIGHT_EFFECT_STATIC_GRADIENT
  #define RGBLIGHT_EFFECT_TWINKLE
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  #define RGBLIGHT_SLEEP
#endif

// Default but used in macros
#define TAPPING_TERM 200

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

// non-KC_ keycodes
#define KC_RST RESET
#define KC_TOG RGB_TOG
#define KC_MOD RGB_MOD
#define KC_HUI RGB_HUI
#define KC_SAI RGB_SAI
#define KC_VAI RGB_VAI

// Combo stuff
/*
#define TAPPING_TERM 900
// #define HOLD_ON_OTHER_KEY_PRESS 
// This isn't necessary, but because permissive holds are broken with layer taps, I recommend building this keymap with sigprof's fork,
// which has a feature (Hold on other key press) that fixes it. https://github.com/sigprof/qmk_firmware
*/
#define PERMISSIVE_HOLD
#define FORCE_NKRO
#define ONESHOT_TIMEOUT 2000
//#define RETRO_TAPPING  //this sucks I hate it
#define COMBO_COUNT 16
#define COMBO_TERM 50



// ~Space saving measures!~

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

// Remove this if you want to debug!
#ifndef NO_DEBUG
	#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
	#define NO_PRINT
#endif // !NO_PRINT


/* ─────────────────────────────── LED Layout ─────────────────────────────── */

/* Back of LEFT half, order of the leds on the PCB
 *                __--------------------------------___
 *         _____--        ┌───┐                        ---___
 *        /     ┌───┐     │ 4 │               ┌───┐    ┌───┐ |
 *       |      │ 3 │     └───┘               │ 5 │    │ 9 │ |
 *       |      └───┘                         └───┘    └───┘ |
 *       |                                                   |
 *       |                                    ┌───┐    ┌───┐ |
 *       |      ┌───┐     ┌───┐      ┌───┐    │ 6 │    │ 8 │ |
 *     _/       │ 1 │     │ 2 │      │ 7 │    └───┘    └───┘ |
 *   _/  ┌───┐  └───┘     └───┘      └───┘    _______________|
 *   \   │ 0 │      _________________________|
 *    \  └───┘  __--
 *     \    __--
 *      \__/
 * */
#define RGBLIGHT_LED_MAP { 9, 8, 5, 6, 7, 4, 2, 3, 1, 0, 10, 11, 13, 12, 14, 17, 16, 15, 18, 19 }
