#include "blink_mode.h"
#include "init_mcu.h"
#include <util/delay.h>

void blink_mode_1(void)
{
		driver_74hc595(0b11111100); // stolbcy
		driver_74hc595(0b10000000); // stroki
		_delay_ms(100);  
		driver_74hc595(0b11111100); // stolbcy
		driver_74hc595(0b01000000); // stroki
		_delay_ms(100); 
		driver_74hc595(0b11111100); // stolbcy
		driver_74hc595(0b00100000); // stroki
		_delay_ms(100); 
		driver_74hc595(0b11111100); // stolbcy
		driver_74hc595(0b00010000); // stroki
		_delay_ms(100); 
}

void blink_mode_2(void)
{
		driver_74hc595(0b10000000); // stolbcy
		driver_74hc595(0b11110000); // stroki
		_delay_ms(100);  
		driver_74hc595(0b01000000); // stolbcy
		driver_74hc595(0b11110000); // stroki
		_delay_ms(100); 
		driver_74hc595(0b00100000); // stolbcy
		driver_74hc595(0b11110000); // stroki
		_delay_ms(100); 
		driver_74hc595(0b00010000); // stolbcy
		driver_74hc595(0b11110000); // stroki
		_delay_ms(100); 
		driver_74hc595(0b00001000); // stolbcy
		driver_74hc595(0b11110000); // stroki
		_delay_ms(100); 
		driver_74hc595(0b00000100); // stolbcy
		driver_74hc595(0b11110000); // stroki
		_delay_ms(100); 
}

void blink_mode_3(void)
{
		driver_74hc595(0b10000100); // stolbcy
		driver_74hc595(0b10000000); // stroki
		_delay_ms(500);  
		driver_74hc595(0b01000000); // stolbcy
		driver_74hc595(0b01000000); // stroki
		_delay_ms(500); 
		driver_74hc595(0b00100000); // stolbcy
		driver_74hc595(0b00100000); // stroki
		_delay_ms(500); 
		driver_74hc595(0b00001100); // stolbcy
		driver_74hc595(0b00010000); // stroki
		_delay_ms(500); 
}

void blink_mode_4(void)
{
		driver_74hc595(0b10000000); // stolbcy
		driver_74hc595(0b11110000); // stroki
		_delay_ms(500);  
		driver_74hc595(0b01000000); // stolbcy
		driver_74hc595(0b11110000); // stroki
		_delay_ms(500); 
		driver_74hc595(0b00100000); // stolbcy
		driver_74hc595(0b11110000); // stroki
		_delay_ms(500); 
		driver_74hc595(0b00010000); // stolbcy
		driver_74hc595(0b11110000); // stroki
		_delay_ms(500); 
		driver_74hc595(0b00001000); // stolbcy
		driver_74hc595(0b11110000); // stroki
		_delay_ms(500); 
		driver_74hc595(0b00000100); // stolbcy
		driver_74hc595(0b11110000); // stroki
		_delay_ms(500); 
}