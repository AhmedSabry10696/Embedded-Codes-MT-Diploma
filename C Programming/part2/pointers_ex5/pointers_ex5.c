/**
 * @file pointers_ex5.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief print array elements using different ways
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main( void )
{
    int b[] = { 10, 20, 30, 40 }; 
    int *bPtr = b; 
    int i; 
    int offset; 

    printf( "Array b printed with:\nArray subscript notation\n" );
    /* print array elements using array name */
    for ( i = 0; i < 4; i++ ) 
    {
        printf( "b[ %d ] = %d\n", i,b[i] );
    } 

    printf( "\nPointer/offset notation where\nthe pointer is the array name\n" );
    /* print array elements using array name plus offest */
    for ( offset = 0; offset < 4; offset++ ) 
    {
        printf( "*( b + %d ) = %d\n", offset, *(b+offset) );
    }

    printf( "\nPointer subscript notation\n" );
    /* print array elements using pointer name */
    for ( i = 0; i < 4; i++ )
    {
        printf( "bPtr[ %d ] = %d\n", i,bPtr[i] );
    }

    printf( "\nPointer/offset notation\n" );
    /* print array elements using pointer name plus offset */
    for ( offset = 0; offset < 4; offset++ ) {
        printf( "*( bPtr + %d ) = %d\n", offset, *(bPtr+offset) );
    } 

    return 0;
}
