/* program prints the months orders and names */
#include <stdio.h>


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
