/**
 * @file uart.h
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief uart headr file
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef UART_H_
#define UART_H_

#include "MICRO_CONFIG.h"
#include "STD_TYPES.h"
#include "COMMON_MACROS.h"

/**
 * @brief uart initialization
 * 
 */
void UART_init(void);


/**
 * @brief uart send byte 
 * 
 * @param data byte to send 
 */
void UART_sendByte(const uint8 data);


/**
 * @brief uart receive byte
 * 
 * @return uint8 received byte
 */
uint8 UART_recieveByte(void);


/**
 * @brief uart receive byte non blocking    
 * 
 * @param pData received byte
 * @return ERROR_t it may be E_OK, E_NOK, PENDING
 */
ERROR_t UART_receiveByte_NonBlocking(uint8 * pData);


/**
 * @brief uart send string
 * 
 * @param Str string to send
 */
void UART_sendString(const uint8 *Str);


/**
 * @brief uart recieve string till '#'
 * 
 * @param Str received string
 */
void UART_receiveString(uint8 *Str);

#endif /* UART_H_ */