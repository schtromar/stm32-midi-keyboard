#!/bin/bash
make clean && make && st-flash --format ihex write build/stm32f4_usb_midi.hex
