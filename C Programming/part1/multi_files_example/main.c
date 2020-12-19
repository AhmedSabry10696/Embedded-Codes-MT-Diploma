//program to explain multiple files project

#include <stdio.h>
#include "File1.h"  // file that has all functions declaration

int main()
{
    float a=5,b=3,c;
    c = add(a,b);
    printf("a+b=%f\n",c);
    c = sub(a,b);
    printf("a-b=%f\n",c);
    c = mul(a,b);
    printf("a*b=%f\n",c);
    c = division(a,b);
    printf("a/b=%f\n",c);
    return 0;
}






