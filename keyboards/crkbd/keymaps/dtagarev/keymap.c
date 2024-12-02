#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, RSFT_T(KC_QUOT), KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RALT_T(KC_ESC), KC_LALT, MO(1), KC_SPC, KC_ENT, MO(2), KC_LGUI),
	[1] = LAYOUT_split_3x6_3(KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, KC_LSFT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_EQL, KC_MINS, KC_BSLS, KC_LBRC, KC_RBRC, KC_GRV, KC_LCTL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_PLUS, KC_UNDS, KC_PIPE, KC_LCBR, KC_RCBR, RALT_T(KC_TILD), KC_LALT, KC_TRNS, KC_SPC, KC_ENT, MO(3), KC_LGUI),
	[2] = LAYOUT_split_3x6_3(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_DEL, KC_LSFT, KC_BRIU, KC_NO, KC_NO, KC_MUTE, KC_VOLU, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_HOME, KC_PGUP, KC_LCTL, KC_BRID, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_BTN1, KC_BTN2, KC_BTN4, KC_BTN5, KC_END, KC_PGDN, CW_TOGG, MO(3), KC_SPC, KC_ENT, KC_TRNS, KC_LGUI),
	[3] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F12, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_NO, TG(4), KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_MPLY, KC_MSTP, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RALT, KC_LALT, KC_TRNS, KC_SPC, KC_ENT, KC_TRNS, KC_LGUI),
	[4] = LAYOUT_split_3x6_3(BL_TOGG, RGB_TOG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(4), BL_UP, RGB_MOD, RGB_VAI, RGB_SPI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, BL_DOWN, RGB_RMOD, RGB_VAD, RGB_SPD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





