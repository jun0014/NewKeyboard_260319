#include QMK_KEYBOARD_H

enum layer_names {
    _BASE = 0,
    _L1,
    _L2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        MI_CH2, MI_CH3, MI_CH4, MI_CH5, MI_CH6, MI_CH7, MI_CH8, MI_CH11, MI_CH12, QK_BOOT, TG(_L1), TG(_L2),
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),

    [_L1] = LAYOUT(
        MI_CH2, MI_CH3, MI_CH4, MI_CH5, MI_CH6, MI_CH7, MI_CH8, MI_CH11, MI_CH12, QK_BOOT, TG(_L1), TG(_L2),
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        MI_C,   MI_Cs,  MI_D,   MI_Ds,  MI_E,   MI_F,   MI_Fs,  MI_G,    MI_Gs,   MI_A,    MI_As,   MI_B
    ),

    [_L2] = LAYOUT(
        MI_CH2, MI_CH3, MI_CH4, MI_CH5, MI_CH6, MI_CH7, MI_CH8, MI_CH11, MI_CH12, QK_BOOT, TG(_L1), TG(_L2),
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        MI_C1,  MI_Cs1, MI_D1,  MI_Ds1, MI_E1,  MI_F1,  MI_Fs1, MI_G1,   MI_Gs1,  MI_A1,   MI_As1,  MI_B1
    )
};
