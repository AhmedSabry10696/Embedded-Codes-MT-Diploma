/*
 * Ex3.c
 * program to find the length of string
 * Created on: Jul 19, 2015
 * Author: Ahmed Sabry
 */

#include <stdio.h>
int main()
{
    char s[1000], i;

    printf("Enter a string: ");
    /* get string from the user */
    scanf("%s", s);

    /* loop till the end of string */
    for(i = 0; s[i] != '\0'; ++i);

    /* print the number of iterations till the end of string */
    printf("Length of string: %d", i);
    return 0;
}
