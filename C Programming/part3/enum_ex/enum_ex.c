/**
 * @file enum_ex.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief print the months orders and names
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>


/**
 * @brief enum for months of the year
 * 
 */
enum months 
{
    /* begin values from 1 (default begin with 0) */
    JAN=1,FEB,MAR,APR,MAY,JUNE,JULY,AUG,SEP,OCT,NOV,DEC  
};

int main()
{
    enum months month;
    printf("size of month = %d\n", sizeof(month)); /*4 byte*/
    char month_name[13][10] = {" ","January","February","March","April","May","June","July","August","September","October","November","December"};
    
    for(month = JAN ; month <= DEC ; month++)
    {
        printf("%d %s\n",month,month_name[month]);
    }
    return 0;
}
