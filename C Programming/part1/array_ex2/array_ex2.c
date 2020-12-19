// sum and average of array elements

#include <stdio.h>
#define arr_size 5 

int main()
{
    int arr[arr_size];
    int i,sum=0;
    float average;
    //take array elements form user
    printf("Please Enter Five Numbers : \n");
    for(i=0;i<arr_size;i++)
    {
        fflush(stdout);
        scanf("%d",&arr[i]);
    }
    //print array elements and calculate sum
    printf("The array elements are:\n");
    for(i=0;i<arr_size;i++)
    {
        printf("%d\t",arr[i]);
        sum+=arr[i];
    }
    printf("\nThe sum of the array elements is: %d\n",sum);
    average = (float)sum/arr_size;
    printf("The average of the array elements is: %f\n",average);
    return 0;
}
