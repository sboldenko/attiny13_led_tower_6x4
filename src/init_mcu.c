#include "init_mcu.h"
#include <avr/interrupt.h>
#include <avr/io.h>

void init_mcu(void)
{
    DDRB  = 0b00000111;
    PORTB = 0b00001000; // B0 - clk, B1 - latch, B2 - data.

    GIMSK = 0b00100000;
    PCMSK = 0b00001000;

    sei();
}