/*
 * Ex7.c
 * fuction that takes string and return true if char adistinct and false if repeated 
 * Created on: Jul 19, 2015
 * Author: Ahmed Sabry
 */

#include <stdio.h>

#define TRUE  1
#define FALSE 0

int check_distinct(char s[])
{
	int i=0,j=0;
	int results = TRUE;

	/* the idea is compare each element with all the following array elements */
	while(s[i] != '\0') /* loop until the end of the string */
	{
		j = i+1; /* start compare from the next character */
		while(s[j] != '\0') /* loop from the next char till the end of string */
		{
			if(s[i] == s[j]) /* check if the first element matches any of the next char */
			{
				results = FALSE; /* this character is not distinct */
			}
			j++; /* to compare with the next character */
		}
		i++;
	}
	return results;
}

int main(void)
{
	char str[20];
	int results;
	printf("Please enter ther required sting message : ");
	/* get string from the user */
	gets(str);
	printf("\n");
	/* call the function */
	results = check_distinct(str);
	
	/* check the result */
	if(results == TRUE)
	{
		printf("all characters are distinct in the string\n");
	}
	else
	{
		printf("characters are not distinct in the string\n");
	}
	
	return 0;
}


