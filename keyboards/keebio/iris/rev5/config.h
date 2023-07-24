/*
Copyright 2019 Danny Nguyen <danny@keeb.io>

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

#define SPLIT_HAND_PIN D5

#define BACKLIGHT_DEFAULT_LEVEL 3

/* ws2812 RGB LED */
#define RGBLED_NUM 12    // Number of LEDs
#define RGBLED_SPLIT { 6, 6 }
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
/* #define RGBLIGHT_EFFECT_TWINKLE // redefined according  */
#define RGBLIGHT_DEFAULT_VAL 128
#define RGBLIGHT_DEFAULT_MODE (RGBLIGHT_MODE_RAINBOW_SWIRL + 2)
#define RGBLIGHT_SLEEP  // disable backlight when notebook is turned off or sleeping

// caps word, requires `ENABLE_CAPS_WORD` in rules.mk
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define TAPPING_TERM 300 // ms, default: 200
