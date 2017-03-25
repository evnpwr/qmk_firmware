#include "dorkyboard.h"

#include "backlight.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define LAYER0 0


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[LAYER0] = KEYMAP(
    KC_LCTRL, KC_LGUI,  KC_LALT,  KC_SPACE, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_RALT, \
    KC_RGUI,  KC_MENU,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_KP_0,  KC_NO,    KC_KP_DOT,KC_NO, \
    KC_RSHIFT,KC_NO,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMMA, \
    KC_DOT,   KC_SLASH, KC_RSHIFT,KC_NO,    KC_UP,    KC_NO,    KC_KP_1,  KC_KP_2,  KC_KP_3,  KC_KP_ENTER, \
    KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L, \
    KC_SCOLON,KC_QUOTE, KC_BSLASH,KC_ENTER, KC_NO,    KC_NO,    KC_KP_4,  KC_KP_5,  KC_KP_6,  KC_NO, \
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O, \
    KC_P,     KC_LBRC,  KC_RBRC,  KC_DELETE,KC_END,   KC_PGDN,  KC_KP_7,  KC_KP_8,  KC_KP_9,  KC_KP_PLUS, \
    KC_GRAVE, KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9, \
    KC_0,     KC_MINS,  KC_EQL,   KC_INS,   KC_HOME,  KC_PGUP,  KC_NLCK,  KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS, \
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9, \
    KC_F10,   KC_F11,   KC_F12,   KC_BSPACE,KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_NO,    KC_NO,    KC_NO )
};

/*enum function_id {
};*/

const uint16_t PROGMEM fn_actions[] = {
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch (id) {
  }
}
