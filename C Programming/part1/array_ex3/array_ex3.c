/* Program that gets and displays the maximum number of an array */
#include <stdio.h>
#define arr_size 5

int main()
{
    int arr[arr_size];
    int i,max_num;
   
    /* take array elements from user */
    for(i=0;i<arr_size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    /* get the max value from array elements */
    max_num = arr[0];
    for(i=1;i<arr_size;i++)
    {
        if(arr[i] > max_num)
        {
            max_num = arr[i];
        }
    }
    printf("The maximum number in the array is : %d",max_num);
    
    return 0;
}
