/**
 * @file pointers_ex1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief demonstrate pointers basic concepts
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;

    /* address of the pointer */
    printf("Address of the pointer in memory:%p\n", &ptr); 
    
    /* address of the x  = content of the pointer*/
    printf("Pointer value: %p\n",ptr); 
    printf("Address of x: %p\n",&x); 
    
    printf("*ptr=%d \t x=%d\n",*ptr,x); 
    *ptr = 15; /* x = 15 */
    printf("*ptr=%d \t x=%d\n",*ptr,x);
    
    printf("*&ptr=%p",*&ptr);
    
    return 0;
}
