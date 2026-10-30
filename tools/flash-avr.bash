#!/usr/bin/env bash

set -euo pipefail

# Run checks
pio check --skip-packages

# Compile & flash the cart reader firmware to the atmega2560
pio run -t upload
