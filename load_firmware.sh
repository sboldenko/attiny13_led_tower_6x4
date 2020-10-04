#!/bin/bash

echo "."
echo "."
echo "."
cd output
echo "start loading firmware"
avrdude -c avrisp2 -P usb -p t13 -U flash:w:attiny13_led_tower_6x4.hex
echo "load firmware is complete"
echo "."
echo "."
echo "."