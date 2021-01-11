/*  Write a program that Count Number of words in entered string.*/

#include <stdio.h>
#define N 100

int main()
{
    char name[N];
    int word_count=0,i;

    printf("Please enter the required string message : ");
    gets(name); /* get the string using gets function */
    
    for(i=0;i<N;i++)
    {
        if(name[i]==' ')
        {
            word_count++;
        }
    }
    word_count++; /* for last word */
    printf("number of words = %d\n",word_count);
    return 0;
}
