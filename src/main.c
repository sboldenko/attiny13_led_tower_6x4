/*
 * attiny13_led_tower_6x4.c
 *
 * Created: 27.09.2020 
 * Author:  sboldenko
 */ 

#define F_CPU     9600000UL             	

#include <avr/io.h>
#include <util/delay.h>
#include "blink_mode.h"
#include "init_mcu.h"
#include "driver_74hc595.h"

uint8_t k=0;

ISR(PCINT0_vect)
{
	_delay_ms(50);

	if((PINB & (1<<PB3)) == 0)
		k++;

	if(k == 4)
		k = 0;
}

void main(void)
{
	init_mcu();

	while(1)
	{
		switch(k)
		{
			case 0: 
				blink_mode_1();
				break;
			case 1: 
				blink_mode_2();
				break;
			case 2: 
				blink_mode_3();
				break;	
			case 3: 
				blink_mode_4();
				break;								
			default:
				break;
		}
	}
}