/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief explain the multip files concept
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
/* file that has all functions declaration */
#include "File1.h"  

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






