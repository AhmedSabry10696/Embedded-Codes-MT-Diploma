/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief program Count Number of words in entered string
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/* max array size */
#define N 100

int main()
{
    char name[N];
    int word_count=0,i;

    printf("Please enter the required string message : ");
    /* get the string till enter */
    gets(name);
    
    /* loop for array max size */
    for(i=0;i<N;i++)
    {
        if(name[i]==' ')
        {
            word_count++;
        }
    }

    /* for last word */
    word_count++;
    printf("number of words = %d\n",word_count);
    
    return 0;
}
