/**
 * @file Ex2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  program prints the prime numbers between two numbers
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief print prime numbers between two integer numbers
 * 
 * @param num1 first number 
 * @param num2 second number 
 */
void print_primes(int num1,int num2)
{
	int i,j;

	/* flag to indicate that the number is prime or not */
	int not_prime = 0; 
	
	/* loop from number1 to number2 */
	for(i=num1;i<=num2;i++)
	{
		for(j=2;j<i;j++)
		{
			/* in case the reminder equals zero */
			if( i%j == 0 ) 
			{
				/* this number is not a prime number */
				not_prime = 1; 
			}
		}

		if(not_prime == 0)
		{
			/* print in case the number is a prime number */
			printf("%d\t",i); 
		}
		
		else
		{
			not_prime = 0;
		}
	}
}

int main(void)
{
	int num1,num2;
	
	/* receive the two numbers from user */
	printf("Please enter the two numbers : ");
	scanf("%d %d",&num1,&num2);
	printf("\n");
	
	/* print the prime numbers bet num1 and  num2 */
	print_primes(num1,num2);
	
	return 0;
}


