/* 3.3. Program about calculating the hypotenuse of a right angled triangle based on its sides.
- sides a and b are entered
- calculate hypotenuse c as: square root of (a^2 + b^2).
- function for calculating square root: sqrt().
- function for power of a number: pow(number, power).
- in order to use these functions, include the header file: math.h */
#include <stdio.h>
#include <math.h>

//To declare consts of the power of a pow.
#define SQUARE_POWER 2.0

void main()
{
    //To declare the sides of a right angled triangle variables, and the hypotenuse variable.
    float a, b, h;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$ PYTHAGOREAN THEOREM $$$$$$$$$$$$$$$$$$$$$$$$\n\n");
    printf("Please, introduce the measure of one side of the right angled triangle: ");
    scanf("%f", &a);
    printf("\nPlease, introduce the measure of the other side of the right angled triangle: ");
    scanf("%f", &b);

    //Doing operations.....
    printf("\n\n\tDoing the operation of the PYTHAGOREAN THEOREM....\n");
    h = sqrt(pow(a, SQUARE_POWER) + pow(b, SQUARE_POWER));

    //Print the solution....
    printf("\n\nThe HYPOTENUSE of the right angled triangle is: %g\n\n", h);
}
