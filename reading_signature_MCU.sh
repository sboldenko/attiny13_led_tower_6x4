#!/bin/bash

echo "."
echo "."
echo "."
echo "start reading signature MCU"
avrdude -c avrisp2 -P usb -p t13 
echo "reading signature MCU is complete"
echo "."
echo "."
echo "."