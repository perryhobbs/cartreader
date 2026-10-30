#!/usr/bin/env bash

set -euo pipefail

# Make sure we inserted the microcontroller we expect & that its device id is readable by the programmer
minipro -p PIC12F629 -D || echo "Device not found"

# Flash the lock resync firmware to the PIC12F629
# Firmware from https://github.com/mrehkopf/sd2snes/blob/master/cic/snescic-lock-resync.hex
minipro -p PIC12F629 -w tools/snescic-lock-resync.hex
