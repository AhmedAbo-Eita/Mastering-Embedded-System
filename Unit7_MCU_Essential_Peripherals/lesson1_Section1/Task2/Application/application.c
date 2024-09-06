/*
 * application.c
 *
 * Created: 7/29/2024 11:02:17 PM
 *  Author: es-ahmedabdellatif20
 */ 
#define F_CPU 8000000UL
#include "application.h"
#include "util/delay.h"


uint8_t flag = 0; // the reading of push button

void app_init()
{
	//set pins 
	clear(DDRD,2);
	
	// set pins 4 as output pins
	set(DDRD,4);	//buzzer
	
	
}
void app_loop()
{
	if(get_value(PIND,2)==1)
	{
		set(PORTD,4);
		_delay_ms(500);
		clear(PORTD,4);
	}
	
	
}
