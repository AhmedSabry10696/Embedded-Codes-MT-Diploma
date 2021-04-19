/**
 * @file bitfields_ex1.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief bit field example
 * @version 0.1
 * @date 2021-04-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief define simple structure
 * 
 */
typedef struct
{
  unsigned int widthValidated;
  unsigned int heightValidated;
}status1;

/**
 * @brief define a structure with bit fields 
 * 
 */
typedef struct
{
  unsigned  int widthValidated  : 1;
  unsigned  int heightValidated : 5;
}status2;

/**
 * @brief define a structure with bit fields
 * 
 */
typedef struct
{
  unsigned  int widthValidated  : 32;
  unsigned  int heightValidated : 5;
  unsigned  int longValidated   : 3;
} status3;

int main()
{
   /* size of int is : 4 bytes */   
   printf("size of int : %d\n",sizeof(int));

   /* size of status1 is 8 bytes --> struct of two int numbers */
	 printf( "Memory size occupied by status1 : %d\n", sizeof(status1));

   /* size of status2 is 4 bytes becuase of using bitfields */
	 printf( "Memory size occupied by status2 : %d\n", sizeof(status2));

   /* size of status3 is 8 bytes */
	 printf( "Memory size occupied by status2 : %d\n", sizeof(status3));
   
   return 0;
}
