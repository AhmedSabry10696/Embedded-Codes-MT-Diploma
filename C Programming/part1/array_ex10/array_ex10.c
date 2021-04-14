/**
 * @file array_ex10.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  calculate the sum of two 2D arrays
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>

int main()
{
   int a[2][2], b[2][2], c[2][2];
   int i,j;

   printf("Enter the elements of 1st matrix\n");
   /* take elements of the first 2D array from user */
   /* loop till rows num */
   for(i=0;i<2;++i)  
   {
        /* loop till cols num */
       for(j=0;j<2;++j)   
       {
            printf("Enter a[%d][%d]: ",i,j);
            fflush(stdout);
            scanf("%d",&a[i][j]);
       }
   }

   printf("Enter the elements of 2nd matrix\n");
   /* take elements of the second 2D array */
   for(i=0;i<2;++i)
   {
       for(j=0;j<2;++j)
       {
            printf("Enter b[%d][%d]: ",i,j);
            fflush(stdout);
            scanf("%d",&b[i][j]);
       }
   }

    /* calculate the sum of the two 2D arrays and store sum in the third one */
   for(i=0;i<2;++i)
   {
       for(j=0;j<2;++j)
       {
            c[i][j]=a[i][j]+b[i][j]; 
       }
   }

   printf("\nSum Of Matrix:\n");
   /* print the sum of the two 2D arrays */
   for(i=0;i<2;++i)
   {
       for(j=0;j<2;++j)
       {
            printf("%d\t",c[i][j]);
            if(j==1)       
                printf("\n");
      }
   }

return 0;
}
