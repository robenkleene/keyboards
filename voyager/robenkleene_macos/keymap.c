// Copyright 2023 ZSA Technology Labs, Inc <@zsa>
// Copyright 2023 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum voyager_layers {
  _BASE,
  _FCTN,
  _FCT2,
  _NUMB,
  _UTIL
};

#define FCTN MO(_FCTN)
#define FCT2 MO(_FCT2)
#define NUMB MO(_NUMB)
#define UTIL MO(_UTIL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,  KC_T,     KC_Y,     KC_U,  KC_I,      KC_O,     KC_P,     KC_BSPC,
KC_ESC,     KC_A,     KC_S,     KC_D,     KC_F,  KC_G,     KC_H,     KC_J,  KC_K,      KC_L,     KC_SCLN,  KC_QUOT,
KC_LSFT,    KC_Z,     KC_X,     KC_C,     KC_V,  KC_B,     KC_N,     KC_M,  KC_COMMA,  KC_DOT,   KC_SLSH,  KC_RSFT,
TG(_NUMB),  KC_LCTL,  KC_LALT,  KC_LGUI,  FCTN,  _______,  _______,  FCTN,  KC_RGUI,   KC_RALT,  KC_RCTL,  KC_ENT,
KC_SPC,     KC_ENT,   KC_ENT,   KC_SPC                                                                     
),
[1] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                      KC_7,    KC_8,    KC_9,    KC_MINS, KC_SLSH, KC_F12,
        _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,                      KC_4,    KC_5,    KC_6,    KC_PLUS, KC_ASTR, KC_BSPC,
        _______, _______, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR,                      KC_1,    KC_2,    KC_3,    KC_DOT,  KC_EQL,  KC_ENT,
                                                     _______, _______,    _______, KC_0
),
[2] = LAYOUT(
        RGB_TOG, QK_KB,   RGB_MOD, RGB_M_P, RGB_VAD, RGB_VAI,                      _______, _______, _______, _______, _______, QK_BOOT,
        _______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______,                      KC_PGUP, KC_HOME, KC_UP,   KC_END,  _______, _______,
        _______, KC_MPRV, KC_MNXT, KC_MSTP, KC_MPLY, _______,                      KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
        _______, _______, _______, _______, _______, _______,                      _______, C(S(KC_TAB)), C(KC_TAB), _______, _______, _______,
                                                     _______, _______,    _______, _______
    ),
};
