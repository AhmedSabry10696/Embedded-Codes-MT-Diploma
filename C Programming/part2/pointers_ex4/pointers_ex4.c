/**
 * @file pointers_ex4.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief demonstrate the relation between pointers and arrays
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main()
{
    int i;
    int arr[4] = {1,2,3,4};
    int *p_arr = arr;

    printf("Array Addresses:\n");
    /* print array elements addresses using arr name */
    for(i=0;i<4;i++)
    {
        printf("%p\t",arr+i);
    }

    /* print array elements addresses using pointer */
    printf("\nFirst Element Address: %p\n",p_arr);
    p_arr++;
    printf("Second Element Address: %p\n",p_arr);
    p_arr+=2;
    printf("Forth Element Address: %p\n",p_arr);
    return 0;
}
