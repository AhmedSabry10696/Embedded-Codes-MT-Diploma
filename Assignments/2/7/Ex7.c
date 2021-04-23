/**
 * @file Ex7.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  program takes string and return true if char adistinct and false if repeated
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

#define TRUE  1
#define FALSE 0

/**
 * @brief find if string is distinct or not
 * 
 * @param s string to check
 * @return int result it may br true or false
 */
int check_distinct(char s[])
{
	int i = 0, j = 0;
	int results = TRUE;

	/* the idea is compare each element with all the following array elements */

	/* loop until the end of the string */
	while(s[i] != '\0') 
	{
		/* start compare from the next character */
		j = i+1; 

		/* loop from the next char till the end of string */
		while(s[j] != '\0') 
		{
			/* check if the first element matches any of the next char */
			if(s[i] == s[j])
			{
				/* this character is not distinct */
				results = FALSE; 
			}

			/* to compare with the next character */
			j++; 
		}
		i++;
	}
	return results;
}

int main(void)
{
	char str[20];
	int results;

	/* get string from the user */
	printf("Please enter ther required sting message : ");
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


