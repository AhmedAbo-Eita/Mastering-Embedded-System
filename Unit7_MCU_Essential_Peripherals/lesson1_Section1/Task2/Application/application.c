/*
 * application.c
 *
 * Created: 7/29/2024 11:02:17 PM
 *  Author: es-ahmedabdellatif20
 */ 
#define F_CPU 8000000UL
#include "application.h"
#include "util/delay.h"

uint8_t counter = 0; // loop counter
void app_init()
{
	// set pins 5,6,7 as output pins
	set(DDRD,5);
	set(DDRD,6);
	set(DDRD,7);
	
}
void app_loop()
{
	for(counter = 0 ; counter<3; counter++)
	{
		set(PORTD,counter+5); // addetion of 5 because the first led connected with port d led 5
		_delay_ms(500);
	}
	for(counter = 7 ; counter>=5; counter--)
	{
		clear(PORTD,counter); 
		_delay_ms(500);
	}
}
