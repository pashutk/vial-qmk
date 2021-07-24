#include QMK_KEYBOARD_H

#define ____ KC_TRNS


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT( 
        KC_P7,  KC_P8,  KC_P9,
        KC_P4,  KC_P5,  KC_P6,
        KC_P1,  KC_P2,  KC_P3
    ),

    [1] = LAYOUT( 
        ____,  ____,  ____,
        ____,  ____,  ____,
        ____,  ____,  ____
    ),

    [2] = LAYOUT( 
        ____,  ____,  ____,
        ____,  ____,  ____,
        ____,  ____,  ____
    ),

    [3] = LAYOUT( 
        ____,  ____,  ____,
        ____,  ____,  ____,
        ____,  ____,  ____
    )

};
