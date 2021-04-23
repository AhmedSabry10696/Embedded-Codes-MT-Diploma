/**
 * @file i2c.h
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief i2c driver header file
 * @version 0.1
 * @date 2021-04-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef I2C_H_
#define I2C_H_

#include "MICRO_CONFIG.h"
#include "STD_TYPES.h"
#include "COMMON_MACROS.h"

/* I2C Status Bits in the TWSR Register */

/* start has been sent */
#define TW_START         0x08 

/* repeated start */
#define TW_REP_START     0x10 

/* Master transmit ( slave address + Write request ) to slave + Ack received from slave */
#define TW_MT_SLA_W_ACK  0x18 

/* Master transmit ( slave address + Read request ) to slave + Ack received from slave */
#define TW_MT_SLA_R_ACK  0x40

/* Master transmit data and ACK has been received from Slave */
#define TW_MT_DATA_ACK   0x28

/* Master received data and send ACK to slave */
#define TW_MR_DATA_ACK   0x50 

/* Master received data but doesn't send ACK to slave */
#define TW_MR_DATA_NACK  0x58 

/**
 * @brief two wire interface initialization
 * 
 */
void TWI_Init(void);


/**
 * @brief two wire interface start 
 * 
 */
void TWI_Start(void);


/**
 * @brief two wire interface stop
 * 
 */
void TWI_Stop(void);


/**
 * @brief two wire interface write data
 * 
 * @param data data to write
 */
void TWI_Write(uint8 data);


/**
 * @brief two wire interface read and send Ack
 * 
 * @return uint8 
 */
uint8 TWI_Read_With_ACK(void);


/**
 * @brief two wire interface read without Ack
 * 
 * @return uint8 
 */
uint8 TWI_Read_With_NACK(void); 


/**
 * @brief two wire interface get status
 * 
 * @return uint8 
 */
uint8 TWI_Get_Status(void);


#endif /* I2C_H_ */
