# Corne Ferro Keyboard Configuration

This repository contains my personal keyboard configuration for a handwired Corne keyboard using QMK firmware with Vial support.

## Features

- QMK firmware with Vial support
- Custom keymap with:
  - QWERTY base layer
  - RAISE layer for numbers and symbols
  - LOWER layer for additional functions
  - VIM layer for Vim-style navigation and commands
- RP2040 (Raspberry Pi Pico) microcontroller support

## Layout

### Base Layer (QWERTY)

```
Left half:                    Right half:
Q W E R T                    Y U I O ;
A S D F G                    H J K L P
Z X C V B                    N M , . /
Enter Shift GUI             Bksp Space Raise
```

### Raise Layer

```
Left half:                    Right half:
1 2 3 4 5                    6 7 8 9 0
6 7 8 9 0                    ← ↓ ↑ → '
` - = [ ]                    Home PgDn PgUp End \
Enter Shift Boot            Del Space Trans
```

### Lower Layer

```
Left half:                    Right half:
Q W E R T                    Y U I O P
A S D F G                    H J K L ;
Z X C V B                    N M , . /
Enter Shift Q               Bksp Space Q
```

### Vim Layer

```
Left half:                    Right half:
Esc W E R T                  Y U I O P
A S D F G                    H J K L ;
Z X C V B                    N M , . /
Enter Shift Vim             Bksp Space Trans
```

## Building

To build the firmware:

```bash
# Clone the QMK firmware repository
git clone https://github.com/qmk/qmk_firmware.git
cd qmk_firmware

# Copy this keyboard configuration
cp -r /path/to/corne-ferro-keyboard/keyboards/handwired/corne_ferro keyboards/handwired/

# Build the firmware
make handwired/corne_ferro:vial
```

## Flashing

1. Put your keyboard in bootloader mode (double-tap reset)
2. Flash the firmware using Vial or QMK Toolbox

## License

This keyboard configuration is released under the GPL-2.0-or-later license.
