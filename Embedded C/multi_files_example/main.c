#include <stdio.h>
#include "file1.h"

int main()
{
    float a= 5, b= 3, c;
    
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





