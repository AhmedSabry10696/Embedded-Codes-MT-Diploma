#include <stdio.h>

/* Description :
 * MAX inline function to print the maximum value of two numbers
 */
void MAX(int,int);

/* it's not like normal function; it is a text replacement
 * so it increase the code size but there is no context switch
 */
inline void MAX(int X,int Y)
{
    if(X>Y)
    {
        printf("The Greater Number Is : %d\n",X);
    }
    else
    {
        printf("The Greater Number Is : %d\n",Y);
    }
}

int main()
{
    int a =10 , b =5;
    /* get the maximum number */
    MAX(a,b);
    
    return 0;
}
