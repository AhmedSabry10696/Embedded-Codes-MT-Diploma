/*
 * Ex5.c
 * Conate two strings
 * Created on: Jul 19, 2015
 * Author: Ahmed Sabry
 */

#include <stdio.h>

int main()
{
   char str1[50], str2[50], i, j;
  
   printf("\nEnter first string: ");
   /* get 1st string */
   gets(str1);

   printf("\nEnter second string: ");
   /* get 2nd string */
   gets(str2);

   /* This loop is to store the length of str1 in i
    * It just counts the number of characters in str1
    * You can also use strlen instead of this.
    */
   for(i=0; str1[i]!='\0'; ++i);

   /* This loop would concatenate the string str2 at
    * the end of str1
    */
   for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }
   
   /* '\0' represents end of string */
   str1[i]='\0';

   /* print the result */
   printf("\nOutput: %s",str1);

   return 0;
}
