/* 3.8. Program about making a program to transfer time given in total seconds, into time given in hours, minutes and
seconds. */
#include <stdio.h>

//To declare the const of passing between hours, min and seconds.
#define MIN_SEG 60.0

void main()
{
    //To declare the variable of seconds, minutes and hours.
    float seg, min, hours, aux, time_out;
    int seg_clock, min_clock, hours_clock;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$ S T O P W A T C H $$$$$$$$$$\n\n");
    printf("Please, introduce a total number of seconds: ");
    scanf("%f", &time_out);

    //Doing operations.....
    printf("\n\n\tDoing the stopwatch operations....\n\n");
    hours = (time_out / (MIN_SEG * MIN_SEG));
    hours_clock = (int)hours;
    aux = (float)hours_clock;
    hours = hours - aux;
    min = hours * MIN_SEG;
    min_clock = (int)min;
    aux = (float)min_clock;
    min = min - aux;
    seg = min * MIN_SEG;
    seg_clock = (int)seg;

    //Print the stopwatch....
    printf("\n\nSTOPWATCH => %gs = %dh %dm %ds\n\n", time_out, hours_clock, min_clock, seg_clock);
}
