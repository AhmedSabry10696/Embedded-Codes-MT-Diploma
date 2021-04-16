/**
 * @file Exercise2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief configure INT1 pull up to flash 8 leds (postive logic) five times
 *		  Main program rolling 8 leds every 0.5 second
 * @version 0.1
 * @date 2021-04-16
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

/* global variables */ 
unsigned char g_Interrupt_Flag = 0;
unsigned char p;

/**
 * @brief Construct a new ISR object
 * 
 */
ISR(INT1_vect)         
{
	g_Interrupt_Flag = 1;
	p = PORTC;  /* save the current state of portc */        
}

/**
 * @brief External INT1 enable and configuration function
 * 
 */
void INT1_Init(void)        
{
	/* Disable interrupts by clearing I-bit */
	SREG  &= ~(1<<7);    

	/* Configure INT1/PD3 as input pin */
	DDRD  &= (~(1<<PD3));  

	 /* Enable the internal pull up resistor at PD3 pin */ 
	PORTD |= (1<<PD3);     

	 /* Enable external interrupt pin INT1 */
	GICR  |= (1<<INT1);    

 	/* Trigger INT1 with the falling edge */
	MCUCR |= (1<<ISC11);   

	/* Trigger INT1 with the falling edge */
	MCUCR &= ~(1<<ISC10);   

	/* Enable interrupts by setting I-bit */
	SREG  |= (1<<7);        
}

int main(void)
{
	/* Enable and configure external INT1 */
	INT1_Init(); 	

	/* Configure all PORTC pins as output pins */
	DDRC  = 0xFF;    

	/* First led is on at the beginning (Positive Logic configuration) */
	PORTC = 0x01;    

	unsigned char i;

    while(1)
    {
		/* ideal case */
		if(g_Interrupt_Flag == 0) 
		{
			_delay_ms(500);

			/* every time only one led is ON */
			PORTC = (PORTC<<1); 
			if(PORTC == 0x00)
		 	  {
			   PORTC = 0x01;
			  }
		}

		/* interrupt case */
		else if(g_Interrupt_Flag == 1) 
		{
			/* flash 8 leds five times every 500 ms */
			for(i = 0 ; i < 5 ; i++)
			{
				PORTC = 0xFF;
				_delay_ms(500);
				
				PORTC = 0x00;
				_delay_ms(500);
			}
			/* last state of leds before interrupt */   
			PORTC = p;  
			
			/* after finish make flag = 0 again */
			g_Interrupt_Flag = 0; 
		}
	}
}
