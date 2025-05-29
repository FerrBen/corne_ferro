// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Layer declarations
enum layers {
    _QWERTY,
    _RAISE,
    _LOWER,
    _VIM,     // New Vim layer
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        // Left half (18 keys)
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        LT(_LOWER, KC_Z), KC_X, KC_C, KC_V, KC_B,
        KC_ENT, KC_LSFT, KC_LGUI,

        // Right half (18 keys)
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_SCLN,
        KC_H,    KC_J,    KC_K,    KC_L,    KC_P,
        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOT,
        KC_BSPC, KC_SPC,  MO(_RAISE)
    ),
    [_RAISE] = LAYOUT(
        // Left half (18 keys)
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_GRV,  KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC,
        KC_ENT,  KC_LSFT, QK_BOOT,

        // Right half (18 keys)
        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_QUOT,
        KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_BSLS,
        KC_DEL,  KC_SPC,  KC_TRNS
    ),
    [_LOWER] = LAYOUT(
        // Left half (18 keys)
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        KC_ENT, KC_LSFT, KC_Q,

        // Right half (18 keys)
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_BSPC, KC_SPC, KC_Q
    ),
    [_VIM] = LAYOUT(
        // Left half (18 keys)
        KC_ESC,  KC_W,    KC_E,    KC_R,    KC_T,     // ESC for normal mode, w/e/r/t for movement
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     // a/s/d/f/g for text objects
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     // z/x/c/v/b for operations
        KC_ENT,  KC_LSFT, MO(_VIM),                    // Hold for Vim layer

        // Right half (18 keys)
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     // y/u/i/o/p for operations
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  // h/j/k/l for movement
        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  // n/m/,/./ for search/navigation
        KC_BSPC, KC_SPC,  KC_TRNS                      // Space for leader key
    )
};
