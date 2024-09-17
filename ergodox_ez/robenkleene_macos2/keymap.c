#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0 // Default
#define FCTN 1 // Function
#define FCT2 2 // Function 2
#define UTIL 3 // Util
#define NUMB 4 // Util

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT_ergodox(  // layer 0 : default

// Left Keyboard
KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,      KC_5,  KC_NO,
KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,      KC_T,  KC_NO,
KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,      KC_G,
KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,  TG(NUMB),
KC_ESC,   KC_LCTL,  KC_LALT,  KC_LGUI,  MO(FCTN),

// Left Cluster
TG(NUMB),  KC_NO,
KC_NO,
KC_SPC,    KC_ESC,  KC_NO,

// Right Keyboard
KC_NO,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_NO,
KC_NO,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
KC_H,      KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
TG(FCTN),  KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
MO(FCTN),  KC_RGUI,  KC_RALT,  KC_LCTL,  KC_ENT,

// Right Cluster
KC_NO,  TG(FCTN),
KC_NO,
KC_NO,  KC_ENT,    KC_SPC
    ),

// SYMBOLS
[FCTN] = LAYOUT_ergodox(

// Left Keyboard
KC_TRNS,   KC_F1,    KC_F2,    KC_F3,    KC_F4,     KC_F5,   KC_TRNS,
KC_GRV,    KC_1,     KC_2,     KC_3,     KC_4,      KC_5,    KC_TRNS,
TG(NUMB),  KC_F1,    KC_F2,    KC_F3,    KC_F4,     KC_F5,
KC_TRNS,   KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,  KC_TRNS,
KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  MO(FCT2),

// Left Cluster
KC_TRNS,  KC_TRNS,
KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,

// Right Keyboard
KC_TRNS,  KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,   KC_TRNS,
KC_TRNS,  KC_6,     KC_7,     KC_8,     KC_9,      KC_0,     KC_BSLS,
KC_F6,    KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,   KC_TRNS,
KC_TRNS,  KC_F12,   KC_MPLY,  KC_VOLD,  KC_VOLU,   KC_UP,    KC_TRNS,
MO(FCT2), KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RIGHT,

// Right Cluster
KC_TRNS,  KC_TRNS,
KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS

),

// Function 2
[FCT2] = LAYOUT_ergodox(

// Left Keyboard
KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_SCRL,  KC_PAUS,  KC_TRNS,  KC_TRNS,
MO(UTIL),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,

// Left Cluster
KC_TRNS,  KC_TRNS,
KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,

// Right Keyboard
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_MUTE,  KC_MPRV,  KC_MNXT,   KC_PGUP,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGDN,  KC_END,

// Right Cluster
KC_TRNS,  KC_TRNS,
KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS

),

// Util
[UTIL] = LAYOUT_ergodox(

// Left Keyboard
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,

// Left Cluster
KC_TRNS,  KC_TRNS,
KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,

// Right Keyboard
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  QK_BOOT,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,

// Right Cluster
KC_TRNS,  KC_TRNS,
KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS

),

// Function 2
[NUMB] = LAYOUT_ergodox(

// Left Keyboard
KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_TRNS,
KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
TG(NUMB),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,

// Left Cluster
KC_TRNS,  KC_TRNS,
KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,

// Right Keyboard
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,

// Right Cluster
KC_TRNS,  KC_TRNS,
KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS

),

};

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }

  ergodox_right_led_2_off();
  ergodox_right_led_1_off();

  if (host_keyboard_led_state().caps_lock) {
    ergodox_right_led_3_on();
    rgb_matrix_set_color_all(0, 0, 25);
    return false;
  } else {
    ergodox_right_led_3_off();
  }

  switch (biton32(layer_state)) {
    case BASE:
      rgb_matrix_set_color_all(17, 25, 17);
      break;
    case FCTN:
      rgb_matrix_set_color_all(25, 0, 25);
      break;
    case FCT2:
      rgb_matrix_set_color_all(0, 25, 25);
      break;
    case NUMB:
      ergodox_right_led_2_on();
      rgb_matrix_set_color_all(0, 25, 0);
      break;
    case UTIL:
      ergodox_right_led_1_on();
      rgb_matrix_set_color_all(25, 0, 0);
      break;
    default:
      if (rgb_matrix_get_flags() == LED_FLAG_NONE)
        rgb_matrix_set_color_all(0, 0, 0);
      break;
  }

  return false;
}
