OLED_DRIVER_ENABLE = yes   # Enables the use of OLED displays
RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow
ENCODER_ENABLE = no
MOUSEKEY_ENABLE = yes	   # Mouse keys
EXTRAKEY_ENABLE = yes 	   # Audio control and System control

# Combo stuff
FORCE_NKRO = yes
VPATH  +=  keyboards/gboards/
COMBO_ENABLE = yes

# ~Space saving measures!~

EXTRAFLAGS += -flto
