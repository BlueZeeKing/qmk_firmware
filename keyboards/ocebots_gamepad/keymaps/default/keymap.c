// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
               JS_0,  JS_1,
               JS_11, JS_2,
               JS_10, JS_3, JS_14,
               JS_9,  JS_4, JS_15,
        JS_12, JS_8,  JS_5, JS_16,
        JS_13, JS_7,  JS_6, JS_17
    )
};
