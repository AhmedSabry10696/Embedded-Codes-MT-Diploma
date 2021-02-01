/* program passes array element and passes the whole arrray by refrence */
#include<stdio.h>
#define SIZE 5

void modifyArray( int b[], int size );  /* modify array declaration */
void modifyElement( int e );            /* modify element declaration */

int main( void )
{
    int a[SIZE] = { 0, 1, 2, 3, 4 };   /* array inint */
    int i;

    printf("values of the original array are:\n" );
    /* print array oringinal values */
    for ( i = 0; i < SIZE; i++ ) 
    {
        printf( "%d\t", a[ i ] );
    }
    printf( "\n" );

    /* pass array a to modifyArray by reference */
    modifyArray( a, SIZE );   /* pass array by refrence (write array name only) */
    
    printf( "The values of the modified array are:\n" );
    /* print array elements after modification */
    for ( i = 0; i < SIZE; i++ ) 
    {
        printf( "%d\t", a[ i ] );
    }
    
    printf("\nThe value of a[3] is %d\n", a[ 3 ] );
    modifyElement( a[ 3 ] );   /* pass element by value */
    printf( "The value of a[ 3 ] is %d\n", a[ 3 ] );
    
    return 0; 
}

/* modify the whole array done only by refrence */
void modifyArray( int b[], int size )
{
    int j; 
    for ( j = 0; j < size; j++ )
    {
        b[ j ] *= 2;
    }
}

/* modify element from arr may be done by value or refrence her done by value */
void modifyElement( int e )  
{
    printf( "Value in modifyElement is %d\n", e *= 2 );
}
