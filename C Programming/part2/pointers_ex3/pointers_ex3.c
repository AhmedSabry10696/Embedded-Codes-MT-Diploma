/* App find and display a certain number in array */

#include <stdio.h>

#define size 10   /* preprocessor operation just text replacement */
int Linear_Search(int *arr_ptr,int element,int n); /* function declaration */

int main( void )
{
    int i;
    int array[size];
    int location;
    int element;
    
    printf("Enter the required array: \n");
    /* take array elements from the user */
    for(i=0;i<size;i++)
    {
    	fflush(stdout);
        scanf("%d",&array[i]);
    }

    /* take the element to search for it */
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

/* fucntion to find certain element in array */
int Linear_Search(int *arr_ptr,int element,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(element == arr_ptr[i])
            return (i);   /* retuen index of element if founded in the stack */
    }
    return -1; /* element not found */
}
