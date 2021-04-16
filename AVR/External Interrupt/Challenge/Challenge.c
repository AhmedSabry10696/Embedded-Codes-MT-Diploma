/**
 * @file Challenge.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief cofigure INT2 pull down to increament 7 seg and overflow after 9
 * @version 0.1
 * @date 2021-04-16
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <avr/interrupt.h>

/**
 * @brief Construct a new ISR object
 * 
 */
ISR(INT2_vect)                 
{
	if(PORTC == 9)	
		PORTC = 0;
	else 
		PORTC++;		
}

/**
 * @brief External INT2 enable and configuration function
 * 
 */
void INT2_Init(void)        
{
	/* Disable interrupts by clearing I-bit */
	SREG   &= ~(1<<7);      

	/* Enable external interrupt pin INT2 */
	GICR   |= (1<<INT2);	

	/* Trigger INT2 with the raising edge (pull down) */
	MCUCSR |= (1<<ISC2);   

	/* Enable interrupts by setting I-bit */
	SREG   |= (1<<7);      
}

int main(void)
{
	/* Configure least 4 pins in PORTC as output pins */
	DDRC = 0x0F;

	/* Initialization 7-seg display zero at the beginning */
	PORTC = 0; 		
	
	/* Configure INT2/PB2 as input pin */
	DDRB  &= (~(1<<PB2));   
	
	/* Enable and configure external INT2 */
	INT2_Init(); 	
	
    while(1)
    {
		/* do no thing */			
	}					
}
