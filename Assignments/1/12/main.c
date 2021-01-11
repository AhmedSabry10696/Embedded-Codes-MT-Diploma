/* Write a program that reads a positive integer
and checks if it is a prime */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int input;
    int i;
    int not_prime_num = FALSE;

    printf("Please enter the required number : ");
    scanf("%d",&input);
    
    for(i=2;i<input;i++)
    {
        if(input%i == 0)
        {
            not_prime_num = TRUE;
            printf("%d is not prime number\n",input);
        }
    }

    if(not_prime_num == FALSE)
    {
        printf("%d is prime number\n",input);
    }
    
    return 0;
}
