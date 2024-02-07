/*
 * first_project.c
 *
 * Created: 7.02.2024 02:53:11
 * Author : ozgur vurgun
 */ 

#include <avr/io.h>
#ifndef	F_CPU
#define F_CPU 16000000UL
#endif
#include <util/delay.h>

int main(void)
{	
	DDRD  = 0b11111111;
	uint8_t number = 0;
    while (1) 
    {		
		for (number = 0; number<256; number++)
		{
			PORTD = number;
			_delay_ms(300);
		}
    }
}

