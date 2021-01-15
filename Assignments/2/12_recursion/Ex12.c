/*
 * Ex12.c
 * Fibonacci numbers each numbers equal to the sum of the two previous numbers
 * like 1,1,2,3,5,8,13,..
 * write a program to find nth term in this series using recursion
 * Created on: Jul 20, 2015
 * Author: Ahmed Sabry
 */

#include <stdio.h>

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
	printf("Please enter the element index : ");
	/* take the nth term to calculate it */
	scanf("%ld",&num_index);
	
	num = fibanacci(num_index);
	/* print the result */ 
	printf("\nThe %ldth term is:%ld",num_index,num);
	
	return 0;
}


