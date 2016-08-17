# Ergodox

## Firmware

The firmware is now stored at [robenkleene/ergodox-firmware](https://github.com/robenkleene/ergodox-firmware).

### Compiling

* Just type `make` in the Firmware directory, note that this generates a `build/` folder that should not be checked in.
* New layouts are created by copying `qwerty-kinesis-mod.h` and `qwerty-kinesis-mod.c` which are the default layouts.
* Which layout to compile is set in [src/makefile-options](https://github.com/robenkleene/ergodox-firmware/blob/master/src/makefile-options).
* [`src/lib/usb/usage-page/keyboard--short-names.h`](https://github.com/robenkleene/ergodox-firmware/blob/master/src/lib/usb/usage-page/keyboard--short-names.h)
* Lining up the keys in code is done by piping the comma-delimited list through `column -t`.

### Installing 

Using the Teensy app, the "Teensy reset button" is the paperclip button in the upper right of the keyboard.

1. Drag and drop `firmware.eep` onto Teensy.
2. Press the Teensy reset button, this will trigger a reset and displays and error message saying the reset was too fast.
3. Drag and drop `firmware.hex` onto Teensy.
4. Click the "Auto" button in Teensy.
6. Press the Teensy reset button again.

## Resources

* [Nice use of ASCII here](https://github.com/grota/tmk_keyboard/blob/grota_layout/keyboard/ergodox/keymap_grota.h#L25)