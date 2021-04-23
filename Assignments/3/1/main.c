/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  calculate the frequancy of a certain char in string
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

int main()
{
   char str[1000], ch;
   int i, frequency = 0;

   /* get string from the user */
   printf("Enter a string: ");
   gets(str);

   /* get the char to calculate its frequancy */
   printf("Enter a character to find the frequency: ");
   scanf("%c",&ch);

   /* loop till the end of string */
   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }

   /* print the result */ 
   printf("Frequency of %c = %d", ch, frequency);

   return 0;
}
