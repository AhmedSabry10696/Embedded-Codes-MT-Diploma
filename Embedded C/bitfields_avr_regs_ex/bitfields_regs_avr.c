/**
 * @file bitfields_regs_avr.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief using bit-fields to access IO HW registers
 * @version 0.1
 * @date 2021-04-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/* No include for <avr/io.h> define the registers by yourself */

/**
 * @brief Register type structure declaration
 * 
 */
typedef union
{
	unsigned char Data;
	struct
	{
		unsigned char BIT0:1;
		unsigned char BIT1:1;
		unsigned char BIT2:1;
		unsigned char BIT3:1;
		unsigned char BIT4:1;
		unsigned char BIT5:1;
		unsigned char BIT6:1;
		unsigned char BIT7:1;
	}BITS; /* share the same values that is in Data var */
}Reg_8bit;

/*********** PORTA & PORTC Registers Definitions **************/
#define PINA_REG  (*(volatile Reg_8bit *)0x39)
#define DDRA_REG  (*(volatile Reg_8bit *)0x3A)
#define PORTA_REG (*(volatile Reg_8bit *)0x3B)

#define PINB_REG  (*(volatile Reg_8bit *)0x36)
#define DDRB_REG  (*(volatile Reg_8bit *)0x37)
#define PORTB_REG (*(volatile Reg_8bit *)0x38)

#define PINC_REG  (*(volatile Reg_8bit *)0x33)
#define DDRC_REG  (*(volatile Reg_8bit *)0x34)
#define PORTC_REG (*(volatile Reg_8bit *)0x35)

#define PIND_REG  (*(volatile Reg_8bit *)0x30)
#define DDRD_REG  (*(volatile Reg_8bit *)0x31)
#define PORTD_REG (*(volatile Reg_8bit *)0x32)
/**************************************************************/

int main(void)
{
	/* PA2 Input Pin */
	DDRA_REG.BITS.BIT2 = 0;

	/* PA3 Input Pin */
	DDRA_REG.BITS.BIT3 = 0;      

	/* All PORTC pins are output pins */
	DDRC_REG.Data = 0xFF;       

	/* all Leds Off */ 
	PORTC_REG.Data = 0;         
	
	for(;;)
	{
		/* Read PA2 Pin Value */
		if(PINA_REG.BITS.BIT2 == 1)
		{
			/* PC7 = 1 Led On */
			PORTC_REG.BITS.BIT7 = 1;	
		}
		else
		{
			/* PC7 = 0 Led Off */
			PORTC_REG.BITS.BIT7 = 0; 	
		}
		
		/* Read PA3 Pin Value */
		if(PINA_REG.BITS.BIT3 == 1)
		{
			/* all Leds on */
			PORTC_REG.Data = 0xFF;	
		}
		else
		{
			/* all Leds off */
			PORTC_REG.Data = 0;		
		}

	}
	return 0;
}
