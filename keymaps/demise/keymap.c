// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _GAME
}

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define SF_Z  LSFT_T(KC_Z)
#define SF_SS RSFT_T(KC_SLSH)
#define AL_X  LALT_T(KC_X)
#define AL_DT RALT_T(KC_DOT)
#define RA_SP LT(RAISE, KC_SPC)
#define LW_BS LT(LOWER, KC_BSPC)
#define GAME  TG(_GAME)
#define DEF   TG(_DEFAULT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   
    [_BASE] = LAYOUT_4x13(
        KC_7,   KC_8,   KC_9,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_4,   KC_5,   KC_6,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,
        KC_1,   KC_2,   KC_3,   SF_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_SLSH,KC_ENT,
        KC_P0,  KC_DOT, KC_COMM,KC_LCTL,KC_LGUI,        RA_SP,          LW_BS,                  KC_RGUI,KC_RALT
    ),
//    [_LOWER] = LAYOUT_4x13(
//        KC_F7,  KC_F8,  KC_F9,  KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,
//        KC_F4,  KC_F5,  KC_F6,  KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR,KC_PIPE,KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,_______,
//        KC_F1,  KC_F2,  KC_F3,  KC_Z,   _______,_______,_______,_______,_______,_______,_______,_______,_______,
//        _______,_______,_______,_______,_______,        _______,        _______,                _______,_______,
//    ),
//    [_RAISE] = LAYOUT_4x13(
//        KC_HOME,KC_GRV, KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,
//        KC_END, KC_PGUP,KC_TAB, KC_MINS,KC_EQL, KC_LBRC,KC_RBRC,KC_BSLS,KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,_______,
//        KC_DEL, KC_PGDN,KC_LSFT,KC_Z,   _______,_______,_______,_______,_______,_______,_______,_______,_______,
//        _______,_______,_______,_______,_______,        _______,        _______,                _______,_______,
//    ),
    [_GAME] = LAYOUT_4x13(
        KC_ESC, KC_GRV, KC_ESC, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_LEFT,KC_UP,  KC_TAB, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,
        KC_RGHT,KC_DOWN,KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_SLSH,KC_ENT,
        DEF,    KC_DOT, KC_LCTL,KC_LCTL,KC_LGUI,        KC_SPC,         KC_BSPC,                KC_RGUI,KC_RALT
    )
};
