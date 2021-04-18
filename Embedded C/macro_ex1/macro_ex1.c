/**
 * @file macro_ex1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief Macros to multiply two numbers
 * @version 0.1
 * @date 2021-04-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

#define MUL(X,Y) (X*Y)
#define MUL_MODIFIED(X,Y) ((X) * (Y))

int main()
{
    int a = 5,b = 3;
    int c;

    c = MUL(a,b);
    printf("c=%d\n",c);

    /* a+1*b+2 */
    c = MUL(a+1,b+2);
    /* logical error in macro because there is no ( ) around each argument */
    printf("c=%d\n",c);

    c = MUL_MODIFIED(a+1,b+2);
    printf("c=%d\n",c);

    return 0;
}
