/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  Concate two strings
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main()
{
   char str1[50], str2[50], i, j;

   /* get 1st string */
   printf("\nEnter first string: ");
   gets(str1);

   /* get 2nd string */
   printf("\nEnter second string: ");
   gets(str2);

   /* This loop is to store the length of str1 in i
    * It just counts the number of characters in str1
    * You can also use strlen instead of this.
    */
   for(i=0; str1[i]!='\0'; i++);

   /* This loop would concatenate the string str2 at
    * the end of str1
    */
   for(j=0; str2[j]!='\0';j++, i++)
   {
      str1[i]=str2[j];
   }
   
   /* '\0' represents end of string */
   str1[i]='\0';

   /* print the result */
   printf("\nOutput: %s",str1);

   return 0;
}
