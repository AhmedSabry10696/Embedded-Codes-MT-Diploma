//Program to demonstrate the pointer variable basic concepts

#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;

    printf("Address of the pointer in memory:%p\n", &ptr); // address of the pointer
    printf("Pointer value: %p\n",ptr); // address of the x
    printf("Address of x: %p\n",&x); 
    printf("*ptr=%d \t x=%d\n",*ptr,x); 
    *ptr = 15; // x = 15
    printf("*ptr=%d \t x=%d\n",*ptr,x);
    printf("*&ptr=%p",*&ptr);
    return 0;
}
