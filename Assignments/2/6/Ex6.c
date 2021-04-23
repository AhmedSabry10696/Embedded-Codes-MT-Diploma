/**
 * @file Ex6.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  program converts upper case letters to lower case letter
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief convert upper case letters to lower case letters
 * 
 * @param s array of char
 */
void upper_to_lower(char s[])
{
	int i=0;
	
	/* loop until the end of the string */
	while(s[i] != '\0') 
	{
		/* check if it is in the range of A to Z */
		if((s[i]>='A') && (s[i]<='Z'))
		{
			/* the difference between any small letter and captial letter is 32 according to the ASCII table */
			s[i] = s[i] + 32;
		}
		
		/* increment to next array element */
		i++; 
	}
}

int main(void)
{
	char str[20];

	/* get string from the user */
	printf("Please enter ther required sting message : ");
	gets(str);
	printf("\n");

	upper_to_lower(str);
	
	/* prtint the result after converting */
	printf("Message after converting : %s\n",str);
	
	return 0;
}


