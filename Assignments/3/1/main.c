/*
 * Ex1.c
 * calculate the frequancy of a certain char in string
 * Created on: Jul 19, 2015
 * Author: Ahmed Sabry
 */

#include <stdio.h>

int main()
{
   char str[1000], ch;
   int i, frequency = 0;

   printf("Enter a string: ");
   /* get string from the user */
   gets(str);

   printf("Enter a character to find the frequency: ");
   /* get the char to calculate its frequancy */
   scanf("%c",&ch);

   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }

   /* print the result */ 
   printf("Frequency of %c = %d", ch, frequency);

   return 0;
}
