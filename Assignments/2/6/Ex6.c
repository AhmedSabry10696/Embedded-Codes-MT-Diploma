/*
 * Ex6.c
 * function to convert upper case letters to lower case letters
 * Created on: Jul 19, 2015
 * Author: Ahmed Sabry
 */

#include <stdio.h>

void upper_to_lower(char s[])
{
	int i=0;
	
	while(s[i] != '\0') /* loop until the end of the string */
	{
		if((s[i]>='A') && (s[i]<='Z'))
		{
			/* the difference between any small letter and captial letter is 32 according to the ASCII table */
			s[i] = s[i] + 32;
		}
		
		i++; /* increment to fet the next array element */
	}
}

int main(void)
{
	char str[20];
	printf("Please enter ther required sting message : ");
	/* get string from the user */
	gets(str);
	printf("\n");

	upper_to_lower(str);
	
	/* prtint the result after converting */
	printf("Message after converting : %s\n",str);
	
	return 0;
}


