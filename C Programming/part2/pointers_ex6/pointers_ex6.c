/**
 * @file pointers_ex6.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief demonstrate the idea of useage pointer to character as a string
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief display string
 * 
 * @param s string to display
 */
void display_string(char *s)
{
	printf("str = ");

	/* loop until the null (end of string) */
	while(*s != '\0')  
	{
		printf("%c",*s); 
		s++;
	}
	printf("\n");
}

int main(void)
{
	/* pointer to char (string) */
	char *str = "C Programming"; 
	 
	/* %s print string */
	printf("str = %s\n",str);    
	
	str = "Embedded Systems";
	printf("str = %s\n",str);
	
	display_string(str);
	
	return 0;
}
