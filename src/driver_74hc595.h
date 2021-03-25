#ifndef _INIT_MCU_H
#define _INIT_MCU_H

#define F_CPU     9600000UL
#define PORT_MCU  PORTB 
#define LOCK      1    
#define CLK       0
#define DATA      2  

void driver_74hc595(uint8_t data_in);

#endif