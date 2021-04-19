/**
 * @file bitfields_ex2.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief bit fields example
 * @version 0.1
 * @date 2021-04-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

/**
 * @brief create structure using bit fields
 * 
 */
struct
{
  unsigned int age : 3;
} Age;

int main(void)
{
   Age.age = 4;

   /* size of structure */
   printf( "Sizeof( Age ) : %d\n", sizeof(Age) );

   /* print struct elements */
   printf( "Age.age : %d\n", Age.age ); 

   Age.age = 7;
   printf( "Age.age : %d\n", Age.age ); 

   /* will take the first three bits only */
   Age.age = 9;
   printf( "Age.age : %d\n", Age.age );

   return 0;
}
