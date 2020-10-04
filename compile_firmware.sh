#!/bin/bash

echo "."
echo "."
echo "."
mkdir output
cd src
echo "start compilation"
avr-gcc -mmcu=attiny13 -Os main.c blink_mode.c init_mcu.c driver_74hc595.c -o ../output/main.o
echo "compilation is complete"
echo "start conversion to HEX"
cd ../output
avr-objcopy -j .text -j .data -O ihex main.o attiny13_led_tower_6x4.hex
echo "conversion is complete"
echo "."
echo "."
echo "."