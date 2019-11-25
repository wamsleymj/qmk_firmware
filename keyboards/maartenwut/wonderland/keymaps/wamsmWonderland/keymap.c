#include QMK_KEYBOARD_H

enum layers {
  _BASE,
  _FUNC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
  KC_ESC,  KC_GRV,         KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,    KC_0,    KC_MINS, KC_EQL, KC_NO, KC_BSPC, \
  KC_PGUP, KC_TAB,          KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
  KC_PGDN, LCTL_T(KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,    KC_SCLN, KC_QUOT,          KC_ENT, \
           KC_LSFT,         KC_Z, KC_X, KC_C, KC_V, KC_B, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(1), \
           KC_LALT,    KC_LGUI, KC_BSPC, MO(1),    LT(_FUNC, KC_SPC), KC_RALT,                                    KC_RCTL \
  ),
[_FUNC] = LAYOUT(
  KC_TRNS, KC_TRNS,        KC_F1,       KC_F2,     KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_NO, KC_DEL, \
  KC_HOME, KC_TRNS,        RGB_TOG,     RGB_MOD,   RGB_HUI,  RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, KC_UP,   RGB_VAD, RGB_SPI, RGB_SPD, KC_TRNS, KC_TRNS, \
  KC_END,  KC_TRNS,        KC_TRNS,     KC_MRWD,   KC_MFFD,  KC_MPLY, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,          KC_TRNS, \
           KC_TRNS,        KC__VOLDOWN, KC__VOLUP, KC__MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
           KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,                                                               RESET \
  )
};