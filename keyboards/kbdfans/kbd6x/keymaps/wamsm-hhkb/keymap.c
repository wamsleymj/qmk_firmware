/* Copyright 2018 MechMerlin
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
#include QMK_KEYBOARD_H

enum {
  TD_RGB_ALT = 0
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_RGB_ALT] = ACTION_TAP_DANCE_DOUBLE(KC_RALT, 2)
};

// stock hhkb as referenced by https://i.imgur.com/QoBTDHf.png 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: (Base Layer) Default Layer
   * ,-----------------------------------------------------------.
   * |~` |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|\  |Del|
   * |------------------------------------------------------------
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Bksp |
   * |------------------------------------------------------------
   * |CTRL   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |------------------------------------------------------------
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fuc|
   * '-----------------------------------------------------------'
   *        |Alt |CMD |        Space          |CMD |Alt |
   *        `-------------------------------------------'
   */
  [0] = LAYOUT(
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_DEL,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(1),
      KC_TRNS, KC_LALT, KC_LGUI,                   LT(3, KC_SPC),                 KC_RGUI, TD(TD_RGB_ALT), KC_TRNS
      ),

    /* Keymap 1: (Function Layer)
   * ,-----------------------------------------------------------.
   * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
   * |------------------------------------------------------------
   * |Caps |   |   |   |   |   |   |   |Prt|Scr|Pau|Up |   |Reset|
   * |------------------------------------------------------------
   * |       |VU-|VU+|MUT|>|||   |*  |/  |Hme|PgU|Lft|Rgt|       |
   * |------------------------------------------------------------
   * |        |   |   |   |   |   |+  |_  |End|PgD|Dwn|      |   |
   * '-----------------------------------------------------------'
   *        |   |    |                        |    |    |
   *        `-------------------------------------------'
   */
  [1] = LAYOUT(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS, KC_DEL,
      KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   KC_TRNS, RESET,
      KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY, KC_TRNS, KC_ASTR, KC_SLSH, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PLUS, KC_UNDS, KC_END,  KC_PGDN, KC_DOWN, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
      ),

   /* Keymap 2: (RGB Layer)
   * ,-----------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
   * |------------------------------------------------------------
   * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
   * |------------------------------------------------------------
   * |       |   |   |   |   |   |   |   |   |   |   |   |       |
   * |------------------------------------------------------------
   * |        |   |   |   |   |   |   |   |   |   |   |      |   |
   * '-----------------------------------------------------------'
   *        |   |    |                        |    |Base|
   *        `-------------------------------------------'
   */
  [2] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, BL_DEC,  BL_TOGG, BL_INC,  BL_STEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                   KC_TRNS, TO(0), KC_TRNS
      ),

  /* Keymap 3: (Navigation Layer)
   * ,-----------------------------------------------------------.
   * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |Del|
   * |------------------------------------------------------------
   * |     |   |   |   |   |   |   |   |Up |   |   |   |   |     |
   * |------------------------------------------------------------
   * |       |VU-|VU+|MUT|>|||   |   |<- |Dwn| ->|   |   |       |
   * |------------------------------------------------------------
   * |        |   |   |   |   |   |   |   |   |   |   |      |   |
   * '-----------------------------------------------------------'
   *        |   |    |                        |    |Base|
   *        `-------------------------------------------'
   */
  [3] = LAYOUT(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_DEL,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, BL_DEC,  BL_TOGG, BL_INC,  BL_STEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
      ),
};



void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

