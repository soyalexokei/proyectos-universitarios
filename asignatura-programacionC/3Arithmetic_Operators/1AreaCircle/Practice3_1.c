/* 3.1. Program about calculating the area and circumference of a circle!
- Enter the radius R. */
#include <stdio.h>
#include <math.h>

//To declare consts of PI = 3.141593
#define PI 3.141593

void main()
{
    //To declare the radius variable, the area of the circle variable, and the power of the pow.
    float radius, area_circle;
    int power = 2;

    //Start the program.....
    printf("\nPlease, introduce the radius of the circle: ");
    scanf("%f", &radius);

    //Doing operations.....
    printf("\n\n\tDoing the operation of PI * r^2....\n");
    area_circle = PI * pow(radius, power);

    //Print the solution....
    printf("\n\nThe Area of the circle is: %g m^2\n\n", area_circle);
}
