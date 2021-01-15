/*
 * Ex2.c
 * print the prime numbers between two numbers
 * Created on: Jul 19, 2015
 * Author: Ahmed Sabry
 */

#include <stdio.h>

void print_primes(int num1,int num2)
{
	int i,j;
	int not_prime = 0; /* flag to indicate that the number is prime or not */
	
	for(i=num1;i<=num2;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j == 0) /* in case the reminder equals zero */
			{
				not_prime = 1; /* this number is not a prime number */
			}
		}

		if(not_prime == 0)
		{
			printf("%d\t",i); /* print in case the number is a prime number */
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


