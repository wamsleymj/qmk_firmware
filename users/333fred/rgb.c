#include "quantum.h"
#include "333fred.h"

void layer_state_set_rgb(uint32_t state) {
  switch (biton32(state)) {
    case BASE:
      // purple
<<<<<<< HEAD
      rgblight_sethsv_noeeprom(255, 255, 20);
=======
      rgblight_sethsv_noeeprom(210, 255, 20);
>>>>>>> 8c1900a658b4f99c0201008b6832ea71e5e9396f
      break;
    case SYMB:
      // blue
      rgblight_sethsv_noeeprom(191, 255, 20);
      break;
    case VIM:
      // green
      rgblight_sethsv_noeeprom(85, 255, 20);
      break;
    case GAME:
      // red
      rgblight_sethsv_noeeprom(0, 255, 20);
      break;
  }
}

void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom();
  layer_state_set_rgb(1); // Set layer 0 (bit 1) on
}
