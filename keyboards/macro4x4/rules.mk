# This file intentionally left blank
MCU = STM32F401
BOARD = BLACKPILL_STM32_F401

# Bootloader selection
BOOTLOADER = stm32-dfu

DYNAMIC_MACRO_ENABLE = yes
TAP_DANCE_ENABLE = yes
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
VIA_ENABLE 		= yes
VIAL_ENABLE		= yes
SLEEP_LED_ENABLE = no 
QMK_SETTINGS = yes
COMBO_ENABLE = yes
VIAL_INSECURE = no
NKRO_ENABLE = yes           # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no       # Enable keyboard RGB underglow
MIDI_ENABLE = no            # MIDI support
