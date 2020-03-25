/*
 * Taster.c
 *
 * Created: 16.09.2019 09:18:09
 * Author : Waldviertel
 */ 

#include <avr/io.h>


int main(void)
{
    DDRD = DDRD &~ (1<<DDD0);
	PORTD = PORTD | (1<<PORTD0); //int. Pull Up Widerstand am PD0 ein
	
	DDRB = 0xFF;				//ganzer PB als Output
	
    while (1) 
    {
		if ((PIND & 0b00000001) ==  0b00000000)
		{
			PORTB = 0xFF;		//alle LEDs ein
		}
		else
		{
			PORTB = 0x00;		//alle LEDs aus
		}
    }
}

