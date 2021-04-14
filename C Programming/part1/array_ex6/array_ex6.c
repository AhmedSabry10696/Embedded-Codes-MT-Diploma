/**
 * @file array_ex6.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief pass by value and pass by refrence
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#define SIZE 5

void modifyArray( int b[], int size );  
void modifyElement( int e );

int main( void )
{
    /* array inint */
    int a[SIZE] = { 0, 1, 2, 3, 4 };   
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
    
    /* pass element by value */
    modifyElement( a[ 3 ] );  
    printf( "The value of a[ 3 ] is %d\n", a[ 3 ] );
    
    return 0; 
}

/**
 * @brief pass the whole array done only by refrence 
 * 
 * @param b array name
 * @param size array size
 */
void modifyArray( int b[], int size )
{
    int j; 
    for ( j = 0; j < size; j++ )
    {
        b[ j ] *= 2;
    }
}

/**
 * @brief modify element from arr may be done by value or refrence
 * 
 * @param e array element
 */
void modifyElement( int e )  
{
    printf( "Value in modifyElement is %d\n", e *= 2 );
}
