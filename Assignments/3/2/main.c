/*
 * Ex2.c
 * function to reverse string 
 * Created on: Jul 19, 2015
 * Author: Ahmed Sabry
 */

#include<stdio.h>
#include<string.h>

void reverse_string(char * s)
{
	int i = 0, j;
	char temp; 
	j = strlen(s) - 1; /* index of the last element */

	while (i < j)
	{
		/* swap operation */
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		
		/* update index to go to next element */
		i++;
		j--;
	}
}

int main() 
{
   char str[1000];
   
   printf("\nEnter the string :");
   /* get string from user */
   gets(str);

   /* call the function to reverse string */
   reverse_string(str);
   
   /* print the result */
   printf("\nReverse string is :%s", str);
   
   return (0);
}
