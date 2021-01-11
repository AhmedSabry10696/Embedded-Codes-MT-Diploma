/* Write a program that checks if an integer is even or odd */

#include <stdio.h>

int main()
{
    int input;
    printf("Please enter the required number : ");
    scanf("%d",&input);
    
    if((input%2)==0)
    {
        printf("\n%d is an even number",input);
    }
    
    else
    {
        printf("\n%d is an odd number",input);
    }
    
    return 0;
}
