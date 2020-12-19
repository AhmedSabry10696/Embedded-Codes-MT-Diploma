// explain the difference between static and non-static data
//static doesn't poped from stack after the function ended

#include <stdio.h>

void staticArrayInit( void );      // static func declaration
void automaticArrayInit( void );   // non static function declartion

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

void staticArrayInit( void )
{
    static int array1[ 3 ]; // static keyword init arr elements to 0
    int i;
    printf( "\nValues on entering staticArrayInit:\n" );
    //print array1 values
    for ( i = 0; i <= 2; i++ ) 
    {
        printf( "array1[ %d ] = %d ", i, array1[ i ] );
    } 
    printf( "\nValues on exiting staticArrayInit:\n" );
    //print array1 values added to 5
    for ( i = 0; i <= 2; i++ ) 
    {
        printf( "array1[ %d ] = %d ", i, array1[ i ] += 5 );
    } 
}

void automaticArrayInit( void )
{
    int array2[ 3 ] = { 1, 2, 3 };
    int i;
    printf( "\n\nValues on entering automaticArrayInit:\n" );
    //print array2 values
    for ( i = 0; i < 3 ; i++ ) 
    {
        printf("array2[ %d ] = %d ", i, array2[ i ] );
    }
    printf( "\nValues on exiting automaticArrayInit:\n" );
    //print array2 values added to 5
    for ( i = 0; i <= 2; i++ ) 
    {
        printf( "array2[ %d ] = %d ", i, array2[ i ] += 5 );
    } 
}
