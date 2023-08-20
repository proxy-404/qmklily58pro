#include QMK_KEYBOARD_H


enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};


enum custom_keycodes {
    ULCB = SAFE_RANGE,
    URCB,
    ULSB,
    URSB,
    UQUM,
    UAPO,
    UEXC,
    UQEM,
    UATT
};

// ULCB => left curly bracket
// URCB => right curly bracket
// ULSB => left square bracket
// URSB => right square bracket
// UQUM => double quote
// UAPO => apostrophe
// UEXC => exclamation mark
// UQEM => question mark
// UATT => at sign

UQEM, UEXC, UQUM, UAPO, KC_EQL,

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 /* QWERTY
    * ,-----------------------------------------.                    ,-----------------------------------------.
    * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * | TAB  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  [   |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * | LSFT |   A  |   S  |   D  |   F  |   G  |                    |   H  |   J  |   K  |   L  |   ;  |  '   |
    * |------+------+------+------+------+------|-------.    ,-------|------+------+------+------+------+------|
    * | LCTL |   Z  |   X  |   C  |   V  |   B  |Delete |    |Backspc|   N  |   M  |   ,  |   .  |   /  |  =   |
    * `-----------------------------------------|-------|    |-------|-----------------------------------------'
    *                   | WIN  | LALT |LOWER | / SPACE /     \ENTER \  | RAISE| RALT | CAPS |
    *                   |      |      |      |/       /       \      \ |      |      |      |
    *                   `----------------------------'         '------''--------------------'
    * Note: hold SPACE for SHIFT, and also hold ENTER for SHIFT.
    */


    [_QWERTY] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NUHS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RBRC, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_NUBS, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_DEL, KC_BSPC, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_EQL, KC_LGUI, KC_LALT, MO(_LOWER), LSFT_T(KC_SPC), RSFT_T(KC_ENT), MO(_RAISE), KC_RALT, KC_CAPS),


 /* LOWER
    * ,-----------------------------------------.                    ,-----------------------------------------.
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * `-----------------------------------------/       /     \      \-----------------------------------------'
    *                   |      |      |      | /       /       \      \  |      |      |      |
    *                   |      |      |      |/       /         \      \ |      |      |      |
    *                   `----------------------------'           '------''--------------------'
    */ 


    [_LOWER] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_GRV, UQEM, UEXC, UQUM, UAPO, KC_EQL, KC_CIRC, ULCB, ULSB, URSB, URCB, KC_TILD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT, TG(_RAISE), KC_TRNS, KC_TRNS),


/* RAISE
    * ,-----------------------------------------.                    ,-----------------------------------------.
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * `-----------------------------------------/       /     \      \-----------------------------------------'
    *                   |      |      |      | /       /       \      \  |      |      |      |
    *                   |      |      |      |/       /         \      \ |      |      |      |
    *                   `----------------------------'           '------''--------------------'
    */ 


    [_RAISE] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_ESC, KC_PAST, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_INS, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_TRNS, KC_TRNS, KC_PSLS, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_TRNS, KC_TRNS, KC_P0, KC_P1, KC_P2, KC_P3, KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG(_LOWER), KC_ENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),


 /* ADJUST
    * ,-----------------------------------------.                    ,-----------------------------------------.
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
    * `-----------------------------------------/       /     \      \-----------------------------------------'
    *                   |      |      |      | /       /       \      \  |      |      |      |
    *                   |      |      |      |/       /         \      \ |      |      |      |
    *                   `----------------------------'           '------''--------------------'
    */ 


    [_ADJUST] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};



layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

// SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_F4)SS_UP(X_LALT));
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    switch (keycode) {
    case ULCB:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_RALT)SS_TAP(X_7)SS_UP(X_RALT));
        }
        break;
    case URCB:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_RALT)SS_TAP(X_0)SS_UP(X_RALT));
        }
        break;
    case ULSB:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_RALT)SS_TAP(X_8)SS_UP(X_RALT));
        }
        break;
    case URSB:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_RALT)SS_TAP(X_9)SS_UP(X_RALT));
        }
        break;
    case UQUM:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LSFT)SS_TAP(X_2)SS_UP(X_LSFT));
        }
        break;
    case UAPO:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_MINS));
        }
        break;
    case UEXC:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LSFT)SS_TAP(X_1)SS_UP(X_LSFT));
        }
        break;
    case UQEM:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LSFT)SS_TAP(X_MINS)SS_UP(X_LSFT));
        }
        break;
    case UATT:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_RALT)SS_TAP(X_2)SS_UP(X_RALT));
        }
        break;
    }

    if (record->event.pressed) {
        #ifdef OLED_ENABLE
            set_keylog(keycode, record);
        #endif
        // set_timelog();
    }

    return true;
};
