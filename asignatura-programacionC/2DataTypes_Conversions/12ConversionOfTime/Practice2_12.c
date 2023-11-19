/* 2.12. Program about making the conversion of the time given in days (int), hours (int), minutes (int) and seconds (int)
into total seconds (int). It is necessary to enter the number of days, hours, mins and secs and
then display the total number of seconds. */
#include <stdio.h>

#define HOURS_DAY 24 //Hours that 1 day has.
#define MIN_SEG 60 //Minutes that 1 hour has, or Seconds that 1 min has.

void main()
{
    //To declare integer variables of the days, hours, minutes, seconds and the total seconds if you add together the first four.
    int days, hours, minutes, seconds, total_seconds;

    //Start the program....
    printf("\nPlease, introduce the days that you need to introduce: ");
    scanf("%d", &days);
    printf("\nPlease, introduce the hours that you need to introduce: ");
    scanf("%d", &hours);
    printf("\nPlease, introduce the minutes that you need to introduce: ");
    scanf("%d", &minutes);
    printf("\nPlease, introduce the seconds that you need to introduce: ");
    scanf("%d", &seconds);

    //Print all of them like a stopwatch.
    printf("\n\t STOPWATCH : %d:%d:%d:%d \n\n", days, hours, minutes, seconds);

    //Doing the operations....
    total_seconds = ((days*HOURS_DAY+hours)*MIN_SEG+minutes)*MIN_SEG+seconds;

    //Print the total of seconds after adding the four parts of the stopwatch.
    printf("\n\t STOPWATCH : %d seg \n\n", total_seconds);
}
