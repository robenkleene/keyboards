# Ergodox

## Firmware

The heart of the layout is in [default--layout.c](Firmware/keyboard/ergodox/layout/default--layout.c).

### Compiling

Just type `make` in the Firmware directory, note that this generates a lot of files that should be deleted without checking in.

* [benblazak/ergodox-firmware: firmware for the ergoDOX keyboard](https://github.com/benblazak/ergodox-firmware#compile-the-source-code)

### Installing

1. Download and run the Teensy Loader app
2. Press and release the Teensy reset button
3. Click the "Auto" button on the upper right hand side of the Teensy-Loader window
4. Drag and drop the '.hex' file onto the Teensy loader window.
5. Press and release the Teensy reset button

## Resources

* [Nice use of ASCII here](https://github.com/grota/tmk_keyboard/blob/grota_layout/keyboard/ergodox/keymap_grota.h#L25)