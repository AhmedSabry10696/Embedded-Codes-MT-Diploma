/* Write a program that reads a positive integer
and computes the factorial */

#include <stdio.h>

int main()
{
    int input;
    int fact = 1;
    int i;

    printf("Please enter the required number : ");
    scanf("%d",&input);
    
    for(i=1;i<=input;i++)
    {
        fact = fact * i;
    }
    printf("\nfactorial of %d is: %d",input,fact);
    
    return 0;
}
