 #include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _LAYER0 0
#define _LAYER1 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	    /* Keymap _LAYER0: Default Layer
		* ,----------------------------------------------------------------.
		* |~` | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp  |~`  |
		* |----------------------------------------------------------------|
		* |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |Del |
		* |----------------------------------------------------------------|
		* |CTRL   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |PgUp|
		* |----------------------------------------------------------------|
		* |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | Up|PgDn|
		* |----------------------------------------------------------------|
		* |Ctrl|Alt |CMD |        Space          |CMD |FN |Alt|Lef|Dow|Rig |
		* `----------------------------------------------------------------'
		*/
		[_LAYER0] = LAYOUT_65_ansi( /* Base */
			KC_GRAVE,       KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,    KC_7,  KC_8,    KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSPC,   KC_ESC,\
		    KC_TAB,        KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,    KC_U,  KC_I,    KC_O,     KC_P,     KC_LBRC,  KC_RBRC, KC_BSLASH, KC_DEL,\
			CTL_T(KC_CAPS),KC_A,     KC_S,     KC_D,  KC_F,  KC_G,  KC_H,    KC_J,  KC_K,    KC_L,     KC_SCLN,  KC_QUOT,           KC_ENT,    KC_PGUP,\
		    KC_LSFT,       KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,  KC_N,    KC_M,  KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT,           KC_UP,     KC_PGDN,\
		    KC_LCTL, 	   KC_LALT,  KC_LGUI,                LT(1, KC_SPC),                KC_RGUI, MO(1),    KC_RALT,  KC_LEFT,    KC_DOWN,   KC_RIGHT),

		/* Keymap _LAYER1: Function Layer
	   * ,----------------------------------------------------------------.
	   * | ~`| F1|F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del    |    |
	   * |----------------------------------------------------------------|
	   * |     |   |   |   |   |   |   |   |Up |   |   |   |   |RESET|    |
	   * |----------------------------------------------------------------|
	   * |      |   |<< | >>|>|||   |   |<- |Dn | ->|   |   |EEP_RST |Hme |
	   * |----------------------------------------------------------------|
	   * |        |VU-|VU+|MUT|   |   |   |   |   |   |   |      |   |End |
	   * |----------------------------------------------------------------|
	   * |    |    |    |                       |   |   |    |   |    |   |
	   * `----------------------------------------------------------------'
	   */
		[_LAYER1] = LAYOUT_65_ansi( /* FN */
			KC_GRAVE,       KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_TRNS,   KC_TRNS,\
		    KC_TRNS,       RGB_TOG,  RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, KC_UP,   RGB_VAD, RGB_SPI,  RGB_SPD, KC_TRNS, RESET,    KC_TRNS,\
			CTL_T(KC_CAPS),KC_TRNS,  KC_MRWD, KC_MFFD, KC_MPLY, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT,KC_TRNS,  KC_TRNS,          EEP_RST,  KC_HOME,\
		    KC_LSFT,       KC_VOLD,  KC_VOLU, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_END,\
		    KC_TRNS,       KC_TRNS,  KC_TRNS,                  KC_TRNS,                    KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS),
};

void rgb_matrix_indicators_user(void)
{
	    if (IS_LED_ON(host_keyboard_leds(), USB_LED_CAPS_LOCK))
	    {
	      rgb_matrix_set_color(8, 0xFF, 0xFF, 0xFF);
	    }
}

void matrix_init_user(void)
{
  //user initialization
}

void matrix_scan_user(void)
{
  //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
	  return true;
}
