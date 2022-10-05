// Copyright 2022 naudhizb (@naudhizb)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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

#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* key matrix pins  for beccas board*/
// #define MATRIX_ROW_PINS { A0, A1 }
// #define MATRIX_COL_PINS { B6, B7, B8 }
// #define UNUSED_PINS

#define VIAL_KEYBOARD_UID {0x6F, 0xD2, 0x03, 0xC4, 0x16, 0xAF, 0x61, 0x27}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
