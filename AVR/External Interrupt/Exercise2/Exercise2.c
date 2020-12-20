/*
configure INT1 pull up to flash 8 leds (postive logic) five times
Main program 8 leds rolling every 0.5 second
FCPU --> 1 MHZ
*/

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

unsigned char g_Interrupt_Flag = 0;
unsigned char p;

ISR(INT1_vect)         // External INT1 Interrupt Service Routine
{
	g_Interrupt_Flag = 1;
	p = PORTC;        //  save the current state of portc         
}

void INT1_Init(void)        //External INT1 enable and configuration function
{
	SREG  &= ~(1<<7);       // Disable interrupts by clearing I-bit
	DDRD  &= (~(1<<PD3));   // Configure INT1/PD3 as input pin
	PORTD |= (1<<PD3);      // Enable the internal pull up resistor at PD3 pin
	GICR  |= (1<<INT1);     // Enable external interrupt pin INT1

	MCUCR |= (1<<ISC11);    // Trigger INT1 with the falling edge
	MCUCR &= ~(1<<ISC10);
	SREG  |= (1<<7);        // Enable interrupts by setting I-bit
}

int main(void)
{
	INT1_Init();           // Enable and configure external INT1
	DDRC  = 0xFF;          // Configure all PORTC pins as output pins
	PORTC = 0x01;          // First led is on at the beginning (Positive Logic configuration)

	unsigned char i;

    while(1)
    {
		if(g_Interrupt_Flag == 0)
		{
			_delay_ms(500);
			PORTC = (PORTC<<1); //every time only one led is ON
			if(PORTC == 0x00)
		 	  {
			   PORTC = 0x01;
			  }
		}

		else if(g_Interrupt_Flag == 1)
		{
			for(i = 0 ; i < 5 ; i++)
			{
				PORTC = 0xFF;
				_delay_ms(500);
				PORTC = 0x00;
				_delay_ms(500);
			}
			PORTC = p;            // last state of leds before interrupt    
			g_Interrupt_Flag = 0; // after finish make flag = 0 again
		}
	}
}
