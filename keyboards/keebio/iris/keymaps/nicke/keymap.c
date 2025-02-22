#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  SE_AA,
  SE_AE,
  SE_OE
};

#define KC_AA SE_AA
#define KC_AE SE_AE
#define KC_OE SE_OE

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                                KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐      ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_HOME,         KC_END,   KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘      └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       KC_LGUI,  LOWER,    KC_SPC,                    KC_BSPC,  RAISE,    KC_LALT
                                   // └────────┴────────┴────────┘                └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,                             KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  KC_1,     KC_UP,    KC_3,     KC_4,     KC_5,                                KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_AA,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_DEL,   KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  KC_LBRC,                             KC_RBRC,  KC_P4,    KC_P5,    KC_P6,    KC_OE,    KC_AE,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐      ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     BL_STEP,  _______,  _______,  _______,  _______,  KC_LCBR,  KC_MUTE,         KC_RPRN,  KC_RCBR,  KC_P1,    KC_P2,    KC_P3,    KC_MINS,  _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘      └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       _______,  _______,  KC_DEL,                    KC_DEL,   _______,  KC_P0
                                   // └────────┴────────┴────────┘                └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRAVE,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                               KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,                             KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD,  KC_MPRV,  KC_MNXT,  KC_VOLU,  KC_PGUP,  KC_MINS,                             KC_PLUS,   KC_HOME,  RGB_HUI,  RGB_SAI,  RGB_VAI,  KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐      ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  KC_MSTP,  KC_MPLY,  KC_VOLD,  KC_PGDN,  KC_UNDS,  KC_LPRN,          _______, KC_EQL,   KC_END,   RGB_HUD,  RGB_SAD,  RGB_VAD,  _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘      └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       _______,  _______,  _______,                   _______,  _______,  _______
                                   // └────────┴────────┴────────┘                └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     RESET,    _______,  _______,  _______,  _______,  _______,                             _______,  _______,  _______,  _______,  _______,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  _______,  _______,  _______,  _______,  _______,                             _______,  _______,  _______,  _______,  _______,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  _______,  _______,  _______,  _______, _______,                              _______,  _______,  _______,  _______,  _______,  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐     ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  _______,  _______,  _______,  _______,  _______,  _______,        _______,  _______,  _______,  _______,  _______,  _______,  _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘     └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       _______,  _______,  _______,                  _______,  _______,  _______
                                   // └────────┴────────┴────────┘               └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }

  if (!record->event.pressed) return true;

  // Save current Shift state, then clear it.
  uint8_t mods = get_mods();
  clear_mods();
  uint8_t shift = mods & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT));
  switch (keycode) {
  case SE_AA:
      send_string(shift ? SS_RALT("A") : SS_RALT("a"));
      break;
  case SE_AE:
      send_string(shift ? SS_RALT("u")"A" : SS_RALT("u")"a");
      break;
  case SE_OE:
      send_string(shift ? SS_RALT("u")"O" : SS_RALT("u")"o");
      break;
  default:
      set_mods(mods);
      return true;
  }

  // Restore old Shift state.
  set_mods(mods);

  return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (layer_state_is(_LOWER)) {
        if (index == 0) {
            if (clockwise) {
            } else {
            }
        }

        if (index == 1) {
            if (clockwise) {
                tap_code16(LALT(KC_LEFT));
            } else {
                tap_code16(LALT(KC_RGHT));
            }
        }
    }

    if (layer_state_is(_QWERTY)) {
        if (index == 0) {
            if (clockwise) {
                tap_code(KC_VOLD);
            } else {
                tap_code(KC_VOLU);
            }
        }

        if (index == 1) {
            if (clockwise) {
                tap_code(KC_PGUP);
            } else {
                tap_code(KC_PGDN);
            }
        }
    }

    return true;
}
