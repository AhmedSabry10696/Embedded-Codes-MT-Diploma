/* program demonstrate bit fields */

#include <stdio.h>

struct
{
  unsigned int age : 3;
} Age;

int main( )
{
   Age.age = 4;
   printf( "Sizeof( Age ) : %d\n", sizeof(Age) );  /* size of structure */
   printf( "Age.age : %d\n", Age.age ); /* print struct elements */

   Age.age = 7;
   printf( "Age.age : %d\n", Age.age ); 

   Age.age = 9; /* will take the first three bits only */
   printf( "Age.age : %d\n", Age.age );

   return 0;
}
