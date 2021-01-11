/* Write a program that reads a student grade percentage and prints 
 * "Excellent" if his grade is greater than or equal 85
 * "Very Good" for 75 or greater
 * "Good" for 65, "Pass" for 50
 * "Fail" for less than 50 
*/

#include <stdio.h>

int main()
{
    float grade;
    printf("Please enter the student grade : ");
    scanf("%f",&grade);
    
    if(grade>=85)
    {
        printf("Excellent");
    }
    else if(85>grade && grade>=75)
    {
        printf("Very Good");
    }
    else if(75>grade && grade>=65)
    {
        printf("Good");
    }
    else if(65>grade && grade>=50)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
