/**
 * @file Ex12.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief program to find nth number in Fibonacci series like 1,1,2,3,5,8,13,.
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief get nth element in this series
 * 
 * @param n index to find its value
 * @return long 
 */
long fibanacci(long n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	else
	{
		return fibanacci(n-1) + fibanacci(n-2);
	}
}

int main(void)
{
	long num_index,num;

	/* take the nth term to calculate it */
	printf("Please enter the element index : ");
	scanf("%ld",&num_index);
	
	/* print the result */
	num = fibanacci(num_index); 
	printf("\nThe %ldth term is:%ld",num_index,num);
	
	return 0;
}


