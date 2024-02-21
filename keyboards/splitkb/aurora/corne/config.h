/* Copyright 2022 splitkb.com <support@splitkb.com>
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

// Not yet available in `info.json`
#ifdef OLED_ENABLE
#    define OLED_FONT_H "keyboards/splitkb/aurora/corne/glcdfont.c"
#endif

/* // Power indicator LED's as caps lock indicator */
/* // taken from https://docs.splitkb.com/hc/en-us/articles/5799711553820-Power-LED */
/* #define LED_CAPS_LOCK_PIN 24 */
/* #define LED_PIN_ON_STATE 0 */

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

/* time window in which hold-tap keys are interpreted as tabs (if no other key is pressed)
default: 200 ms*/
#define TAPPING_TERM 350

/* If you press a dual-role key, press another key, and then release the
   dual-role key, all within the tapping term, by default the dual-role key will
   perform its tap action. If the HOLD_ON_OTHER_KEY_PRESS option is enabled, the
   dual-role key will perform its hold action instead. */
#define HOLD_ON_OTHER_KEY_PRESS

/* With retro tapping enabled, releasing the key without pressing another will
   send the original keycode even if it is outside the tapping term. */
#define RETRO_TAPPING
