#include <stdio.h>

/* Description :
 * Swap Marco to swap the values of two numbers
 */
#define SWAP(X,Y)\
{\
	/* we can declare variables inside the macro normally as local variables */ \
	int temp;\
	temp = X;\
    X = Y;\
    Y = temp;\
}

/* Description :
 * MAX Marco to print the maximum value of two numbers
 */
#define MAX(X,Y){\
    if(X>Y)\
    {\
        printf("The Greater Number Is : %d\n",X);\
    }\
    else\
    {\
        printf("The Greater Number Is : %d\n",Y);\
    }\
}

int main()
{
    int a= 10,b= 5;
    printf("Values before swapping : a=%d\t b=%d\n",a,b);
    /* swap the two numbers */
    SWAP(a,b);
    printf("Values after swapping  : a=%d\t b=%d\n",a,b);
    
    /* get the maximum number */
    MAX(a,b);
    
    return 0;
}
