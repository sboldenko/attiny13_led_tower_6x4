#!/bin/bash

echo "."
echo "."
echo "."
echo "start loading fuse-bits"
avrdude -c avrisp2 -P usb -p t13 -U lfuse:w:0x7a:m -U hfuse:w:0xff:m -U efuse:w:0xff:m
echo "loading fuse-bits is complete"
echo "."
echo "."
echo "."