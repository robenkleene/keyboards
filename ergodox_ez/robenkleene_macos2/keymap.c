#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0 // Default
#define FCTN 1 // Function
#define FCT2 2 // Function 2
#define UTIL 3 // Util
#define NUMB 4 // Util

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Default
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |  `     |   1  |   2  |   3  |   4  |   5  |      |           |      |   6  |   7  |   8  |   9  |   0  |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | ESC    |   Q  |   W  |   E  |   R  |   T  |      |           |  =   |   Y  |   U  |   I  |   O  |   P  |  BS    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Tab    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |  '     |
 * |--------+------+------+------+------+------|      |           |  -   |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   ?  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      | LCTRL| LALT | LGUI |  Fn  |                                       |  Fn  | RGUI | RALT | RCTRL|      |
 *   `----------------------------------'                                       `----------------------------------'
                                                --------.       ,-------------.
 *                                        | LGUI |  Fn  |       |  Fn  | RGUI |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 |Space | RET  |------|       |------|  Ret   |Space |
 *                                 |      |      | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */

// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[BASE] = LAYOUT_ergodox(  // layer 0 : default

// Left Keyboard
KC_GRV,    KC_1,     KC_2,     KC_3,     KC_4,      KC_5,  KC_NO,
KC_TAB,    KC_Q,     KC_W,     KC_E,     KC_R,      KC_T,  KC_NO,
KC_ESC,    KC_A,     KC_S,     KC_D,     KC_F,      KC_G,
KC_LSFT,   KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,  KC_NO,
TG(NUMB),  KC_LCTL,  KC_LALT,  KC_LGUI,  MO(FCTN),

// Left Cluster
KC_LGUI,  MO(FCTN),
KC_HOME,
KC_SPC,   KC_ENT,    KC_END,

// Right Keyboard
KC_NO,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_NO,
KC_EQL,    KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
KC_H,      KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
KC_MINS,   KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
MO(FCTN),  KC_RGUI,  KC_RALT,  KC_LCTL,  KC_ENT,

// Right Cluster
MO(FCTN),  KC_RGUI,
KC_PGUP,
KC_PGDN,   KC_ENT,   KC_SPC

    ),

/* Function
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |   `    |   1  |   2  |   3  |   4  |   5  | BriU |           | VolU |   6  |   7  |   8  |   9  |   0  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |------|           |------|  F6  |  -   |  =   |  [   |  ]   |   \    |
 * |--------+------+------+------+------+------| BriD |           | VolD |------+------+------+------+------+--------|
 * |        |  F7  |  F8  |  F9  |  F10 | F11  |      |           |      | F12  | Play | VolD | VolU |      |       |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *w  | TNSY |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |  RW  | FF   |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */

// SYMBOLS
[FCTN] = LAYOUT_ergodox(

// Left Keyboard
KC_TRNS,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,   KC_TRNS,
KC_GRV,    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,    KC_PAUS,
MO(UTIL),  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,
KC_TRNS,   KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,  KC_SCRL,
KC_CAPS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  MO(FCT2),

// Left Cluster
KC_TRNS,  KC_TRNS,
KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,

// Right Keyboard
KC_TRNS,  KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,   KC_TRNS,
KC_VOLU,  KC_6,     KC_7,     KC_8,     KC_9,      KC_0,     KC_BSLS,
KC_F6,    KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,   KC_TRNS,
KC_VOLD,  KC_F12,   KC_MPLY,  KC_VOLD,  KC_VOLU,   KC_UP,    KC_TRNS,
MO(FCT2),  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RIGHT,

// Right Cluster
KC_MPRV,  KC_MNXT,
KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS

),

// Function 2
[FCT2] = LAYOUT_ergodox(

// Left Keyboard
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_SCRL,  KC_PAUS,  KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,

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
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,
KC_TRNS,  KC_6,     KC_7,     KC_8,     KC_9,      KC_0,     KC_TRNS,
KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,
// KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_UP,    KC_TRNS,
// KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RIGHT,
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
  switch (biton32(layer_state)) {
    case BASE:
      rgb_matrix_set_color_all(17, 25, 17);
      break;
    case FCTN:
      rgb_matrix_set_color_all(25, 0, 25);
      break;
    case FCT2:
      rgb_matrix_set_color_all(0, 0, 25);
      break;
    case NUMB:
      ergodox_right_led_2_on();
      rgb_matrix_set_color_all(0, 25, 0);
      break;
    case UTIL:
      rgb_matrix_set_color_all(25, 0, 0);
      break;
    default:
      if (rgb_matrix_get_flags() == LED_FLAG_NONE)
        rgb_matrix_set_color_all(0, 0, 0);
      break;
  }
  if (host_keyboard_led_state().caps_lock) {
    ergodox_right_led_1_on();
  } else {
    ergodox_right_led_1_off();
  }

  return false;
}
