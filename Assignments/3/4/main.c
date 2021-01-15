/*
 * Ex4.c
 * program to remove all char in string except alphabets
 * Created on: Jul 19, 2015
 * Author: Ahmed Sabry
 */

#include<stdio.h>

int main()
{
    char line[1000];
    int i, j;

    printf("Enter a string: ");
    /* get string from user */
    gets(line);

    /* loop till the end of the string */
    for(i = 0; line[i] != '\0'; ++i)
    {
        while ( !((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) )
        {
        	/* Enter here in case the element is not alphabet */
            for(j = i; line[j] != '\0'; ++j) /* shift all the next elements to index of non alphabet char */ 
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
