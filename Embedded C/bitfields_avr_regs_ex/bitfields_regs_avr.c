/*  Description : Simple application to demonstrate  
 *  how to use bit-fields to access IO HW registers.
 */

/*
 * No include for <avr/io.h> define the registers by yourself :)
 */

/*************** Register type structure declaration **************/
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
/****************************************************************/

/*********** PORTA & PORTC Registers Definitions **************/
#define PINA_REG  (*(volatile Reg_8bit *)0x39)
#define DDRA_REG  (*(volatile Reg_8bit *)0x3A)
#define PORTA_REG (*(volatile Reg_8bit *)0x3B)

#define PINC_REG  (*(volatile Reg_8bit *)0x33)
#define DDRC_REG  (*(volatile Reg_8bit *)0x34)
#define PORTC_REG (*(volatile Reg_8bit *)0x35)
/*************************************************************/

int main(void)
{
	DDRA_REG.BITS.BIT2 = 0;      /* PA2 Input Pin */
	DDRA_REG.BITS.BIT3 = 0;      /* PA3 Input Pin */
	DDRC_REG.Data = 0xFF;        /* All PORTC pins are output pins */
	PORTC_REG.Data = 0;          /* all Leds Off */
	
	while(1)
	{
		/* Read PA2 Pin Value */
		if(PINA_REG.BITS.BIT2 == 1)
		{
			PORTC_REG.BITS.BIT7 = 1;	/* PC7 = 1 Led On */
		}
		else
		{
			PORTC_REG.BITS.BIT7 = 0; 	/* PC7 = 0 Led Off */
		}
		/* Read PA3 Pin Value */
		if(PINA_REG.BITS.BIT3 == 1)
		{
			PORTC_REG.Data = 0xFF;	/* all Leds on */
		}
		else
		{
			PORTC_REG.Data = 0;		/* all Leds off */
		}

	}
	return 0;
}
