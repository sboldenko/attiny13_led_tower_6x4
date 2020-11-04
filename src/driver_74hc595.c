#include <stdint.h>
#include "driver_74hc595.h"
#include <avr/sfr_defs.h>
#include <avr/io.h>
#include <util/delay.h>

void driver_74hc595(uint8_t data_in)
{
	uint8_t i = 0;
	
	for (i = 0; i <= 7; i++)
	{
		if(bit_is_set(data_in, i))
		{
			PORT_MCU |= (1 << DATA);
			PORT_MCU |= (1 << CLK);
			_delay_us(1);
			PORT_MCU &= ~(1 << CLK);
			_delay_us(1);
		}
		else
		{
			PORT_MCU |= (1 << CLK);
			_delay_us(1);
			PORT_MCU &= ~(1 << DATA);
			PORT_MCU &= ~(1 << CLK);
			_delay_us(1);
		}
	}

	PORT_MCU |= (1 << LOCK);
  	_delay_us(1);
  	PORT_MCU &= ~(1 << LOCK);
	_delay_us(1);
	i = 0;
}