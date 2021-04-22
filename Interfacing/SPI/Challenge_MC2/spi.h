/**
 * @file spi.h
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief spi driver header file
 * @version 0.1
 * @date 2021-04-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef SPI_H_
#define SPI_H_

#include "STD_TYPES.h"
#include "MICRO_CONFIG.h"
#include "COMMON_MACROS.h"

/**
 * @brief spi master initialization
 * 
 */
void SPI_initMaster(void); 


/**
 * @brief spi slave initialization
 * 
 */
void SPI_initSlave(void);


/**
 * @brief spi send byte
 * 
 * @param data byte to send
 */
void SPI_sendByte(uint8 data); 


/**
 * @brief spi receive byte
 * 
 * @return uint8 received byte
 */
uint8 SPI_recieveByte(void);


/**
 * @brief spi send string
 * 
 * @param Str string to send
 */
void SPI_sendString(const uint8 *Str);


/**
 * @brief spi receive string till '#'
 * 
 * @param Str received string
 */
void SPI_receiveString(char *Str);

#endif
