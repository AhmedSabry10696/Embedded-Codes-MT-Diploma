#include <stdio.h>

/*
 * Description:
 * Program to display number of * according to the value in each array element
 */

int main( void )
{
    int n[ 5 ] = { 19, 3, 15, 7, 11};
    int i;
    int j;

    for ( i = 0; i < 5; i++ )
    {
        printf("%d\t",n[i]);
        for ( j = 0; j < n[ i ]; j++ ) 
        {
            printf( "%c", '*' );
        } 
        printf( "\n" );
    }
    return 0; 
}

