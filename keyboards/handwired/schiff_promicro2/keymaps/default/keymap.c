#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define ONE_GRV LT(1,KC_GRAVE)
#define CTL_Z LCTL_T(KC_Z)
#define ALT_SHFT LALT(KC_LSFT)
#define ALT_MENU LALT_T(KC_MENU)
#define LG_QUOT LGUI_T(KC_QUOT)
#define CTL_ESC LCTL_T(KC_ESC)
#define CTL_SLS LCTL_T(KC_SLSH)
#define LT2_COL LT(_RAISE, KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_8x6(
        KC_ESC  ,KC_F1 ,KC_F2  ,KC_F3  ,KC_F4 ,KC_F5  ,_______,   _______,              KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F11  ,KC_F12, _______,
        KC_GRV  ,KC_1  ,KC_2   ,KC_3   ,KC_4  ,KC_5   ,_______,   _______,              KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,KC_EQL, _______,
        KC_TAB  ,KC_Q  ,KC_W   ,KC_E   ,KC_R  ,KC_T   ,_______,   _______,              KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_LBRC ,KC_RBRC,_______,
        KC_CAPS ,KC_A  ,KC_S   ,KC_D   ,KC_F  ,KC_G   ,KC_LWIN,   _______,             KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,KC_ENT  ,KC_PGUP,
        KC_LSFT ,KC_Z  ,KC_X   ,KC_C   ,KC_V  ,KC_B   ,KC_DEL,    _______,            KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT , KC_BSLS ,KC_PGDN,
        KC_LCTL ,MO(1) ,KC_LALT,KC_HOME,KC_END,KC_SPC ,_______,   _______,            KC_SPC  ,KC_UP   ,KC_DOWN ,KC_LEFT ,KC_RGHT ,KC_RCTL ,KC_BSPC  , _______
    ),
    [1] = LAYOUT_8x6(
        KC_ESC  ,KC_F1 ,KC_F2  ,KC_F3  ,KC_F4  ,QK_BOOT  ,_______, _______,        KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F11  ,KC_F12, _______,
        KC_GRV  ,KC_1  ,KC_2   ,KC_3   ,KC_4   ,KC_5     ,_______, _______,        KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,KC_EQL, _______,
        KC_TAB  ,KC_Q  ,KC_W   ,KC_E   ,KC_R   ,KC_T     ,_______, _______,        KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_LBRC ,KC_RBRC,_______,
        KC_CAPS ,KC_A  ,KC_S   ,KC_D   ,KC_F   ,KC_G     ,KC_LWIN, _______,        KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,KC_ENT, KC_PGUP,
        KC_LSFT ,KC_Z  ,KC_X   ,KC_C   ,KC_V   ,KC_B     ,KC_DEL,  _______,        KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,KC_BSLS,KC_PGDN,
        KC_LCTL ,MO(1) ,KC_LWIN,KC_PGUP,KC_PGDN,KC_SPC   ,_______, _______,        KC_SPC  ,KC_VOLU ,KC_VOLD ,KC_MNXT ,KC_MPLY ,KC_RCTL ,KC_BSPC,_______
    ),
};
