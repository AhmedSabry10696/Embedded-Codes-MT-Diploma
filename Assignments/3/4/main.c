/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  remove all char in string except alphabetic
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>

int main()
{
    char line[1000];
    int i, j;

    /* get string from user */
    printf("Enter a string: ");
    gets(line);

    /* loop till the end of the string */
    for(i = 0; line[i] != '\0'; i++)
    {
        while( !((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) )
        {
        	/* Enter here in case the element is not alphabet */

            /* shift all the next elements to index of non alphabet char */ 
            for(j = i; line[j] != '\0'; j++) 
            {
                line[j] = line[j+1]; 
            }

            line[j] = '\0';
        }
    }
    
    printf("Output String: ");
    
    /* print the result */
    puts(line);
    
    return 0;
}
