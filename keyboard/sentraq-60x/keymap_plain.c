#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_ANSI(ESC,   1,     2,     3,     4,     5,     6,     7,     8,     9,     0,     MINS,  EQL,   BSPC,   \
                TAB,   Q,     W,     E,     R,     T,     Y,     U,     I,     O,     P,     LBRC,  RBRC,  BSLS,   \
                FN0,   A,     S,     D,     F,     G,     H,     J,     K,     L,     SCLN,  QUOT,         ENT,    \
                LSFT,  Z,     X,     C,     V,     B,     N,     M,     COMM,  DOT,   SLSH,                RSFT,   \
                LCTL,  LALT,  LGUI,            SPC,                                   FN1,   RGUI,  APP,   RCTL),

    /* 1: Other */
    KEYMAP_ANSI(GRV,   F1,    F2,    F3,    F4,    F5,    F6,    F7,    F8,    F9,    F10,   F11,   F12,  DEL, \
                CAPS,  TRNS,  UP,    TRNS,  BSPC,  HOME,  PGUP,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
                TRNS,  LEFT,  DOWN,  RIGHT, DEL,   END,   PGDN,  TRNS,  INS,   TRNS,  TRNS,  TRNS,         TRNS,  \
                TRNS,  MPRV,  MPLY,  MNXT,  VOLD,  VOLU,  MUTE,  TRNS,  TRNS,  TRNS,  TRNS,                TRNS, \
                TRNS,  TRNS,  TRNS,            TRNS,                                  TRNS,  TRNS,  TRNS,  TRNS),

    /* 2: Mouse */
    KEYMAP_ANSI(TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
                TRNS,  BTN2,  MS_U,  BTN1,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS, \
                TRNS,  MS_L,  MS_D,  MS_R,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,         TRNS,  \
                TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,                TRNS, \
                TRNS,  TRNS,  TRNS,            TRNS,                                  TRNS,  TRNS,  TRNS,  TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_LAYER_MOMENTARY(2),
};

