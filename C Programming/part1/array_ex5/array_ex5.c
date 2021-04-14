/**
 * @file array_ex5.c
 * @author Ahmed Sabry(ahmed.sabry10696@gmail.com)
 * @brief Static and non-static data
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

void staticArrayInit( void );
void automaticArrayInit( void );   

int main( void )
{
    printf( "First call to each function:\n" );
    staticArrayInit();
    automaticArrayInit();

    printf( "\n\nSecond call to each function:\n" );
    staticArrayInit();
    automaticArrayInit();

    return 0; 
}

/**
 * @brief Static function definition
 * 
 */
void staticArrayInit( void )
{
    static int array1[ 3 ]; /* static keyword init arr elements to 0 */
    int i;
    
    printf( "\nValues on entering staticArrayInit:\n" );
    /* print array1 values */
    for ( i = 0; i <= 2; i++ ) 
    {
        printf( "array1[ %d ] = %d ", i, array1[ i ] );
    } 
   
    printf( "\nValues on exiting staticArrayInit:\n" );
    /* print array1 values added to 5 */
    for ( i = 0; i <= 2; i++ ) 
    {
        printf( "array1[ %d ] = %d ", i, array1[ i ] += 5 );
    } 
}

/**
 * @brief non-static function definition
 * 
 */
void automaticArrayInit( void )
{
    int array2[ 3 ] = { 1, 2, 3 };
    int i;
    
    printf( "\n\nValues on entering automaticArrayInit:\n" );
    /* print array2 values */
    for ( i = 0; i < 3 ; i++ ) 
    {
        printf("array2[ %d ] = %d ", i, array2[ i ] );
    }
    
    printf( "\nValues on exiting automaticArrayInit:\n" );
    /* print array2 values added to 5 */
    for ( i = 0; i <= 2; i++ ) 
    {
        printf( "array2[ %d ] = %d ", i, array2[ i ] += 5 );
    } 
}
