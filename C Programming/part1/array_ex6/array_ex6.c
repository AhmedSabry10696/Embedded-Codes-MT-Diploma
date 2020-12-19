#include<stdio.h>
#define SIZE 5

void modifyArray( int b[], int size );
void modifyElement( int e );

int main( void )
{
    int a[SIZE] = { 0, 1, 2, 3, 4 };
    int i;

    printf("values of the original array are:\n" );
    for ( i = 0; i < SIZE; i++ ) 
    {
        printf( "%d\t", a[ i ] );
    }
    printf( "\n" );

    /* pass array a to modifyArray by reference */
    modifyArray( a, SIZE );
    printf( "The values of the modified array are:\n" );
    for ( i = 0; i < SIZE; i++ ) 
    {
        printf( "%d\t", a[ i ] );
    }
    
    printf("\nThe value of a[3] is %d\n", a[ 3 ] );
    modifyElement( a[ 3 ] );
    printf( "The value of a[ 3 ] is %d\n", a[ 3 ] );
    return 0; 
}

void modifyArray( int b[], int size )
{
    int j; 
    for ( j = 0; j < size; j++ )
    {
        b[ j ] *= 2;
    }
}

void modifyElement( int e )
{
    printf( "Value in modifyElement is %d\n", e *= 2 );
}
