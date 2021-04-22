/**
 * @file External_EEPROM.h
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief EEPROM driver header file
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef EXTERNAL_EEPROM_H_
#define EXTERNAL_EEPROM_H_

#define ERROR 0
#define SUCCESS 1

#include "i2c.h"

/**
 * @brief eeprom initialization 
 * 
 */
void EEPROM_Init(void);

/**
 * @brief write byte in specific address in eeprom
 * 
 * @param u16addr address to write in  
 * @param u8data data to write in eeprom
 * @return uint8 it may be ERROR or SUCCESS
 */
uint8 EEPROM_Write_Byte(uint16 u16addr,uint8 u8data);

/**
 * @brief read byte from specific address in eeprom 
 * 
 * @param u16addr address to read from  
 * @param u8data data
 * @return uint8 it may be ERROR or SUCCESS
 */
uint8 EEPROM_Read_Byte(uint16 u16addr,uint8 *u8data);
 
#endif /* EXTERNAL_EEPROM_H_ */
