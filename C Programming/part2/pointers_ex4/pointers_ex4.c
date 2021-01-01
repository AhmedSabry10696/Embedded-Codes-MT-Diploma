/* Program demonstrate the relation between pointers and arrays */

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

    /* print array elements addresses usint pointer */
    printf("\nFirst Element Address: %p\n",p_arr);
    p_arr++;
    printf("Second Element Address: %p\n",p_arr);
    p_arr+=2;
    printf("Forth Element Address: %p\n",p_arr);
    return 0;
}
