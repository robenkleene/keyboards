// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum keyboard_layers {
  _BASE,
  _FCTN,
  _FCT2,
  _NUMB,
  _UTIL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,       KC_T,       KC_Y,   KC_U,   KC_I,       KC_O,       KC_P,     KC_BSPC,
KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,       KC_G,       KC_H,   KC_J,   KC_K,       KC_L,       KC_SCLN,  KC_QUOT,
KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,       KC_B,       KC_N,   KC_M,   KC_COMMA,   KC_DOT,     KC_SLSH,  KC_RSFT,
KC_ESC,   KC_LCTL,  KC_LALT,  KC_LGUI,  MO(_FCTN),  TG(_NUMB),  KC_NO,  KC_NO,  TG(_FCTN),  MO(_FCTN),  KC_RGUI,  KC_RALT,  KC_RCTL,  KC_ENT,
KC_NO,    KC_SPC,   KC_ESC,   KC_ENT,   KC_SPC,     KC_NO
),
[_FCTN] = LAYOUT(
KC_GRV,     KC_1,     KC_2,     KC_3,     KC_4,       KC_5,     KC_6,     KC_7,             KC_8,       KC_9,     KC_0,     KC_BSLS,
TG(_NUMB),  KC_F1,    KC_F2,    KC_F3,    KC_F4,      KC_F5,    KC_F6,    KC_MINS,          KC_EQL,     KC_LBRC,  KC_RBRC,  KC_TRNS,
KC_TRNS,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,   KC_MPLY,          KC_VOLD,    KC_VOLU,  KC_UP,    KC_TRNS,
KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  MO(_FCT2),  KC_TRNS,  KC_TRNS,  KC_TRNS,KC_TRNS,  MO(_FCT2),  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RIGHT,
KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS
),
[_FCT2] = LAYOUT(
KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_BRID,  KC_BRIU,  KC_TRNS,          KC_TRNS,  KC_MUTE,  KC_MPRV,  KC_MNXT,  KC_PGUP,  KC_TRNS,
MO(_UTIL),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGDN,  KC_END,
KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
),
[_NUMB] = LAYOUT(
KC_TRNS,    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,             KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_TRNS,
KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
TG(_NUMB),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
),
[_UTIL] = LAYOUT(
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  QK_BOOT,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
),
};

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

bool rgb_matrix_indicators_user(void) {
  if (host_keyboard_led_state().caps_lock) {
    rgb_matrix_set_color_all(0, 0, 25);
    return false;
  }

  switch (biton32(layer_state)) {
    case _BASE:
      rgb_matrix_set_color_all(17, 25, 17);
      break;
    case _FCTN:
      rgb_matrix_set_color_all(25, 0, 25);
      break;
    case _FCT2:
      rgb_matrix_set_color_all(0, 25, 25);
      break;
    case _NUMB:
      rgb_matrix_set_color_all(0, 25, 0);
      break;
    case _UTIL:
      rgb_matrix_set_color_all(25, 0, 0);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }

  return false;
}
