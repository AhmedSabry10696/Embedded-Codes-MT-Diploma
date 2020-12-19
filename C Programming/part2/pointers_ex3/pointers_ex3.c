#include <stdio.h>
/*
 * Application to find and display a certain number in array
 */
#define size 10
int Linear_Search(int *arr_ptr,int element,int n);

int main( void )
{
    int i;
    int array[size];
    int location;
    int element;
    
    printf("Enter the required array: \n");
    for(i=0;i<size;i++)
    {
    	fflush(stdout);
        scanf("%d",&array[i]);
    }

    printf("Enter element for search: ");
    fflush(stdout);
    scanf("%d",&element);

    location=Linear_Search(array,element,size);
    if(location == -1)
    {
        printf("\nElement not found\n");
    }
    else {
        printf("\nThe element at the location: %d",location);
    }
    return 0;

}

int Linear_Search(int *arr_ptr,int element,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(element == arr_ptr[i])
            return (i);
    }
    return -1; //element not found
}
