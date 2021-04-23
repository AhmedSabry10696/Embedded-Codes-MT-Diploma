/**
 * @file External_EEPROM.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief External eeprom driver source file
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "External_EEPROM.h"

void EEPROM_Init(void)
{
    /* just initialize the TWI module inside the MC */
	TWI_Init(); 
}

uint8 EEPROM_Write_Byte(uint16 u16addr, uint8 u8data)
{
    TWI_Start();
    if (TWI_Get_Status() != TW_START)
        return ERROR;
		
    /* write the device address and so we need to get A8 A9 A10 address bits and R/W = 0 (write) */
    TWI_Write((uint8)(0xA0 | ((u16addr & 0x0700)>>7)));

    if (TWI_Get_Status() != TW_MT_SLA_W_ACK)
        return ERROR; 
		 
    /* send the required location address */
    TWI_Write((uint8)(u16addr));
    if (TWI_Get_Status() != TW_MT_DATA_ACK)
        return ERROR;
		
    /* write byte to eeprom */
    TWI_Write(u8data);
    if (TWI_Get_Status() != TW_MT_DATA_ACK)
        return ERROR;
		
    TWI_Stop();
	
    return SUCCESS;
}

uint8 EEPROM_Read_Byte(uint16 u16addr, uint8 *u8data)
{
    TWI_Start();
    if (TWI_Get_Status() != TW_START)
        return ERROR;
		
    /* write the device address and so we need to get A8 A9 A10 address bits and R/W =0 (write) */
    TWI_Write( (uint8) ( (0xA0) | ( (u16addr&0x0700) >>7 )));
    if (TWI_Get_Status() != TW_MT_SLA_W_ACK)
        return ERROR;
		
    /* send the required location address */
    TWI_Write((uint8)(u16addr));
    if (TWI_Get_Status() != TW_MT_DATA_ACK)
        return ERROR;
		
    /* send a repeated start */
    TWI_Start();
    if (TWI_Get_Status() != TW_REP_START)
        return ERROR;
		
    /* write the device address and so we need to get A8 A9 A10 address bits and R/W = 1 (Read) */
    TWI_Write((uint8)((0xA0) | ((u16addr & 0x0700)>>7) | 1));
    if (TWI_Get_Status() != TW_MT_SLA_R_ACK)
        return ERROR;
		
    *u8data = TWI_Read_With_NACK();
    if (TWI_Get_Status() != TW_MR_DATA_NACK)
        return ERROR;
		
    TWI_Stop();
    return SUCCESS;
}
