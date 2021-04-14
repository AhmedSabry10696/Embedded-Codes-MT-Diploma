/**
 * @file array_ex1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief bitwis operatoin
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>

void main(void)
{
	/* %p print hex address */
	printf("%p",0x80000000 & 0x00000003); 
}
