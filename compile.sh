#!/bin/bash

CHIP=atmega328
FILE=blink

avr-gcc -g -Os -mmcu=$CHIP -c $FILE.c

avr-gcc -g -mmcu=$CHIP -o $FILE.elf $FILE.o

avr-objcopy -j .text -j .data -O ihex $FILE.elf $FILE.hex

avrdude -p $CHIP -c usbtiny -U flash:w:$FILE.hex
