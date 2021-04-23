/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  function to reverse string
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<string.h>

/**
 * @brief function to revers string 
 * 
 * @param s string to reverse
 */
void reverse_string(char * s)
{
	int i = 0, j;
	char temp; 

	/* index of the last element */
	j = strlen(s) - 1; 

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

   /* get string from user */
   printf("\nEnter the string :");
   gets(str);

   /* call the function to reverse string */
   reverse_string(str);
   
   /* print the result */
   printf("\nReverse string is :%s", str);
   
   return (0);
}
