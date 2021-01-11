/* Write a program that reads two integers and 
checks if the first is multiple of the second */

#include <stdio.h>

int main()
{
    int input1,input2;
    printf("Please enter the two numbers : ");
    scanf("%d %d",&input1,&input2);
    
    if(input1%input2==0)
    {
        printf("\n%d is multiply of %d\n",input1,input2);
    }
    
    else
    {
        printf("\n%d is not multiply of %d\n",input1,input2);
    }
    
    return 0;
}
