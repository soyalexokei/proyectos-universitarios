/* 3.7. Program about making a program to calculate the temperature given in ̊C into ̊F. */
#include <stdio.h>

//To declare the consts of the Celsius to Fahrenheit formula.
#define FIRST_CTE 9.0
#define SECOND_CTE 5.0
#define THIRD_CTE 32.0

void main()
{
    //To declare the temperature in Novi Sad today variable, and the variable of the convertion in ºF.
    float degrees, convertion;

    //Start the program.....
    printf("\n\n$$$$$$$$$$ C O N V E R T    T H E    T E M P E R A T U R E $$$$$$$$$$\n\n");
    printf("\n\n$$$$$$$ F R O M    C E L S I U S    T O    F A H R E N H E I T $$$$$$\n\n");
    printf("Please, introduce the Celsius degrees that there are in Novi Sad today: ");
    scanf("%f", &degrees);

    //Doing operations.....
    printf("\n\n\tDoing the convertion from Celsius to Fahrenheit....\n\n");
    convertion = (FIRST_CTE / SECOND_CTE)*degrees + THIRD_CTE;

    //Print the solution....
    printf("\n\nThe temperature today in Novi Sad is: %g F degrees.\n\n", convertion);
}
