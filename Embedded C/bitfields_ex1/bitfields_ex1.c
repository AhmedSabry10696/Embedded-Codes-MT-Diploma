#include <stdio.h>

/* define simple structure */
typedef struct
{
  unsigned int widthValidated;
  unsigned int heightValidated;
}status1;

/* define a structure with bit fields */
typedef struct
{
  unsigned  int widthValidated  : 1;
  unsigned  int heightValidated : 5;
}status2;

/* define a structure with bit fields */
typedef struct
{
  unsigned  int widthValidated  : 32;
  unsigned  int heightValidated : 5;
  unsigned  int longValidated   : 3;
} status3;

int main()
{
   printf("size of int : %d\n",sizeof(int));
	 printf( "Memory size occupied by status1 : %d\n", sizeof(status1));
	 printf( "Memory size occupied by status2 : %d\n", sizeof(status2));
	 printf( "Memory size occupied by status2 : %d\n", sizeof(status3));
    return 0;
}
