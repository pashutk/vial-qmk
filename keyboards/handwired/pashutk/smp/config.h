#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xDEAD
#define PRODUCT_ID      0xFACE
#define DEVICE_VER      0x0001
#define MANUFACTURER    Pashutk
#define PRODUCT         SMP

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* pro_micro pin-out */
#define MATRIX_ROW_PINS { B0, B1, B2 }
#define MATRIX_COL_PINS { C0, C1, C2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define USB_MAX_POWER_CONSUMPTION 100

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
