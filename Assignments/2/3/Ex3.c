/**
 * @file Ex3.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  program to swap two numbers
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief swap two numbers
 * 
 * @param ptr1 address of first number
 * @param ptr2 address of second number
 */
void swap(int *ptr1, int *ptr2)
{
	int temp;
	temp  = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void)
{
	int a = 3, b = 2;
	printf ("Number before swapping : a=%d b=%d\n",a,b);
	
	swap(&a,&b);
	
	printf ("Number after swapping : a=%d b=%d\n",a,b);
	return 0;
}


