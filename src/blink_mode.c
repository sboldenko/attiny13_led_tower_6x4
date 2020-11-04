#include <stdint.h>
#include "driver_74hc595.h"
#include "blink_mode.h"
#include "init_mcu.h"
#include <util/delay.h>

void blink_mode_1(void)
{
		driver_74hc595(0b10000000); // columns
		driver_74hc595(0b11110000); // strings
		_delay_ms(50);  
		driver_74hc595(0b01000000); // columns
		driver_74hc595(0b11110000); // strings
		_delay_ms(50); 
		driver_74hc595(0b00100000); // columns
		driver_74hc595(0b11110000); // strings
		_delay_ms(50); 
		driver_74hc595(0b00010000); // columns
		driver_74hc595(0b11110000); // strings
		_delay_ms(50); 
		driver_74hc595(0b00001000); // columns
		driver_74hc595(0b11110000); // strings
		_delay_ms(50); 
		driver_74hc595(0b00000100); // columns
		driver_74hc595(0b11110000); // strings
		_delay_ms(50); 
}

void blink_mode_2(void)
{
		driver_74hc595(0b00000100); // columns
		driver_74hc595(0b11110000); // strings
		_delay_ms(100);  
		driver_74hc595(0b00001000); // columns
		driver_74hc595(0b11110000); // strings
		_delay_ms(100); 
		driver_74hc595(0b00010000); // columns
		driver_74hc595(0b11110000); // strings
		_delay_ms(100); 
		driver_74hc595(0b00100000); // columns
		driver_74hc595(0b11110000); // strings
		_delay_ms(100); 
		driver_74hc595(0b01000000); // columns
		driver_74hc595(0b11110000); // strings
		_delay_ms(100); 
		driver_74hc595(0b10000000); // columns
		driver_74hc595(0b11110000); // strings
		_delay_ms(100); 
}

void blink_mode_3(void)
{
		driver_74hc595(0b11111100); // columns
		driver_74hc595(0b10000000); // strings
		_delay_ms(100);  
		driver_74hc595(0b11111100); // columns
		driver_74hc595(0b01000000); // strings
		_delay_ms(100); 
		driver_74hc595(0b11111100); // columns
		driver_74hc595(0b00100000); // strings
		_delay_ms(100); 
		driver_74hc595(0b11111100); // columns
		driver_74hc595(0b00010000); // strings
		_delay_ms(100); 
}



void blink_mode_4(void)
{
		driver_74hc595(0b10000100); // columns
		driver_74hc595(0b10000000); // strings
		_delay_ms(100);  
		driver_74hc595(0b01000000); // columns
		driver_74hc595(0b01000000); // strings
		_delay_ms(100); 
		driver_74hc595(0b00100000); // columns
		driver_74hc595(0b00100000); // strings
		_delay_ms(100); 
		driver_74hc595(0b00001100); // columns
		driver_74hc595(0b00010000); // strings
		_delay_ms(100); 
}

