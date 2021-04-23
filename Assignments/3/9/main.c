/**
 * @file main.c
 * @author Ahmed Sabry (ahmed.sabry10696@gmail.com)
 * @brief  program calculates the difference bet 2 time period using struct
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>

/**
 * @brief struct time
 * 
 */
struct TIME
{
  int seconds;
  int minutes;
  int hours;
};

/**
 * @brief calculate the difference between two time periods
 * 
 * @param t1 first time period
 * @param t2 second time period
 * @param diff result
 */
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

int main()
{
    struct TIME startTime, stopTime, diff;

    printf("Enter start time: \n");

    /* take the data of the 1st period */
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter stop time: \n");

    /* take the data of the 2nd period */
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

    /* Calculate the difference between the start and stop time period */
    differenceBetweenTimePeriod(startTime, stopTime, &diff);

    printf("\nTIME DIFFERENCE: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
   
    printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.seconds);
   
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
    if(stop.seconds > start.seconds)
    {
        /* borrow 1 minute */
        start.minutes--;
        start.seconds += 60;
    }

    diff->seconds = start.seconds - stop.seconds;

    if(stop.minutes > start.minutes)
    {
        /* borrow 1 hour */
        start.hours--;
        start.minutes += 60;
    }

    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}