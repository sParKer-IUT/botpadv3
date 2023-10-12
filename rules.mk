# MCU name
MCU = RP2040

BOARD = GENERIC_RP_RP2040

# Bootloader selection
BOOTLOADER = rp2040

# Build Options
# change yes to no to disable
#
BOOTMAGIC_ENABLE = no     # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = no       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           
BACKLIGHT_ENABLE = no      
AUDIO_ENABLE = no           
ENCODER_ENABLE = yes      
QMK_SETTINGS = no         
RGBLIGHT_ENABLE = no
OLED_ENABLE = yes
OLED_DRIVER = ssd1306
UNICODE_ENABLE = no
WPM_ENABLE = yes
COMBO_ENABLE = no
LTO_ENABLE = yes
SWAP_HANDS_ENABLE= no
EXTRAFLAGS  += -flto
TAP_DANCE_ENABLE = yes
KEY_OVERRIDE_ENABLE = no