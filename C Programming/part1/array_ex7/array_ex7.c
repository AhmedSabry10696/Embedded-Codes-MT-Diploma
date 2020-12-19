#include <stdio.h>
/*
 * Description:
 * Program to find a certain number in array using Linear search algorithm
 */
int Linear_Search(int array[],int element,int n);
int main( void )
{
    const int size = 5;
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

    location = Linear_Search(array,element,size);
    if(location == -1)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("\nThe element at the location: %d",location);
    }
    return 0;
}

int Linear_Search(int array[],int element,int n){
    int i;
    for(i=0;i<n;i++)
    {
        if(element==array[i])
            return (i);
    }
    return -1;
}
