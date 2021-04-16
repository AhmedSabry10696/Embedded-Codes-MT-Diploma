/**
 * @file DIO_prog.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief DIO Implementation
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "DIO_interface.h"
#include "DIO_register.h"

/**
 * @brief set pin value
 * 
 * @param u8PortIdCopy port
 * @param u8PinIdCopy  pin to set or clear
 * @param u8PinValCopy value to assign to bit
 */
void DIO_voidSetPinValue(uint8 u8PortIdCopy , uint8 u8PinIdCopy, uint8 u8PinValCopy)
{
	/* Make sure that the Port ID and Pin ID are in the valid range */
	if ((u8PortIdCopy <= DIO_u8_PORTD) && (u8PinIdCopy <= DIO_u8_PIN7))
	{
		if (u8PinValCopy == DIO_u8_HIGH)
		{
			/* Check on the Required PORT Number */
			switch (u8PortIdCopy)
			{
				case DIO_u8_PORTA: SET_BIT(PORTA_Reg,u8PinIdCopy); break;
				case DIO_u8_PORTB: SET_BIT(PORTB_Reg,u8PinIdCopy); break;
				case DIO_u8_PORTC: SET_BIT(PORTC_Reg,u8PinIdCopy); break;
				case DIO_u8_PORTD: SET_BIT(PORTD_Reg,u8PinIdCopy); break;
			}
		
		}
		
		else if (u8PinValCopy == DIO_u8_LOW)
		{
			/* Check on the Required PORT Number */
			switch (u8PortIdCopy)
			{
				case DIO_u8_PORTA: CLEAR_BIT(PORTA_Reg,u8PinIdCopy); break;
				case DIO_u8_PORTB: CLEAR_BIT(PORTB_Reg,u8PinIdCopy); break;
				case DIO_u8_PORTC: CLEAR_BIT(PORTC_Reg,u8PinIdCopy); break;
				case DIO_u8_PORTD: CLEAR_BIT(PORTD_Reg,u8PinIdCopy); break;
			}
		}
	
		else
		{
			/* Do nothing, Wrong value to set */
		}
	}
	
	else
	{
		/* Do nothing, Error in the Pin ID or PORT ID */
	}
}

/**
 * @brief get pin value
 * 
 * @param u8PortIdCopy port
 * @param u8PinIdCopy pin 
 * @return uint8 bit value high or low
 */
uint8 DIO_u8GetPinValue(uint8 u8PortIdCopy, uint8 u8PinIdCopy)
{
	/* Define Local Variable to get the BIT Value */
	uint8 u8ResultLocal;
	/* Make sure that the Port ID and Pin ID are in the valid range */
	if ((u8PortIdCopy <= DIO_u8_PORTD) && (u8PinIdCopy <= DIO_u8_PIN7))
	{
		/* Check on the Required PORT Number */
		switch (u8PortIdCopy)
		{
			case DIO_u8_PORTA: u8ResultLocal= GET_BIT(PINA_Reg,u8PinIdCopy); break;
			case DIO_u8_PORTB: u8ResultLocal= GET_BIT(PINB_Reg,u8PinIdCopy); break;
			case DIO_u8_PORTC: u8ResultLocal= GET_BIT(PINC_Reg,u8PinIdCopy); break;
			case DIO_u8_PORTD: u8ResultLocal= GET_BIT(PIND_Reg,u8PinIdCopy); break;
		}
	}
	
	else
	{
		/* return 0xff in case of error in the Pin ID or PORT ID */
		u8ResultLocal = 0xFF;
	}
	
	return u8ResultLocal;
}

/**
 * @brief set pin direction to output or input port
 * 
 * @param u8PortIdCopy port
 * @param u8PinIdCopy  pin
 * @param u8PinDirCopy diretion for pin may be output or input
 */
void DIO_voidSetPinDirection  (uint8 u8PortIdCopy, uint8 u8PinIdCopy, uint8 u8PinDirCopy)
{
	/* Make sure that the Port ID and Pin ID are in the valid range */
	if ((u8PortIdCopy <= DIO_u8_PORTD) && (u8PinIdCopy <= DIO_u8_PIN7))
	{
		if ( u8PinDirCopy == DIO_u8_OUTPUT )
		{
			/* Check on the Required PORT Number */
			switch (u8PortIdCopy)
			{
				case DIO_u8_PORTA: SET_BIT(DDRA_Reg,u8PinIdCopy); break;
				case DIO_u8_PORTB: SET_BIT(DDRB_Reg,u8PinIdCopy); break;
				case DIO_u8_PORTC: SET_BIT(DDRC_Reg,u8PinIdCopy); break;
				case DIO_u8_PORTD: SET_BIT(DDRD_Reg,u8PinIdCopy); break;
			}
		}
		
		else if ( u8PinDirCopy == DIO_u8_INPUT )
		{
			/* Check on the Required PORT Number */
			switch (u8PortIdCopy)
			{
				case DIO_u8_PORTA: CLEAR_BIT(DDRA_Reg,u8PinIdCopy); break;
				case DIO_u8_PORTB: CLEAR_BIT(DDRB_Reg,u8PinIdCopy); break;
				case DIO_u8_PORTC: CLEAR_BIT(DDRC_Reg,u8PinIdCopy); break;
				case DIO_u8_PORTD: CLEAR_BIT(DDRD_Reg,u8PinIdCopy); break;
			}
		}
		
		else
		{
			/* Do nothing, Wrong Direction Required */
		}
	}
	
	else
	{
		/* Do nothing, Error in the Pin ID or PORT ID */
	}
}

/**
 * @brief set full port direction to output or input
 * 
 * @param u8PortId port
 * @param u8PortDir direction to output or input
 */
void DIO_voidSetPortDirection (uint8 u8PortId, uint8 u8PortDir)
{
	/* Check on the Required PORT Number */
	switch (u8PortId)
	{
		case     DIO_u8_PORTA: DDRA_Reg = u8PortDir; break;
		case     DIO_u8_PORTB: DDRB_Reg = u8PortDir; break;
		case     DIO_u8_PORTC: DDRC_Reg = u8PortDir; break;
		case     DIO_u8_PORTD: DDRD_Reg = u8PortDir; break;
		default: /* Wrong Port ID */       break;
	}
}

/**
 * @brief set full port value to high or low
 * 
 * @param u8PortId port
 * @param u8PortVal port value
 */
void DIO_voidSetPortValue(uint8 u8PortId, uint8 u8PortVal)
{
	/* Check on the Required PORT Number */
	switch (u8PortId)
	{
		case     DIO_u8_PORTA: PORTA_Reg = u8PortVal; break;
		case     DIO_u8_PORTB: PORTB_Reg = u8PortVal; break;
		case     DIO_u8_PORTC: PORTC_Reg = u8PortVal; break;
		case     DIO_u8_PORTD: PORTD_Reg = u8PortVal; break;
		default: /* Wrong Port ID */        break;
	}
}
