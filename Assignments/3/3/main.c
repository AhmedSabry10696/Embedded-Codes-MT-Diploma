/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  program to find the length of string
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main()
{
    char s[1000], i;

    /* get string from the user */
    printf("Enter a string: ");
    gets(s);
    
    /* loop till the end of string */
    for(i = 0; s[i] != '\0'; i++);

    /* print the number of iterations till the end of string */
    printf("Length of string: %d", i);
    
    return 0;
}
