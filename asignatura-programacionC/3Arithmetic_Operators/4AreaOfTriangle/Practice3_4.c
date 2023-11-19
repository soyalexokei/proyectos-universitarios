/* 3.4. Program about calculating the area of a triangle based on its sides:
– Enter sides a, b and c
– Calculate area P  */
#include <stdio.h>
#include <math.h>

//To declare consts for dividing.
#define DIVIDER 2.0

void main()
{
    //To declare the sides of a triangle variables, and the first and second solution of both formulas variables.
    float a, b, c, s, P;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$ HERON'S FORMULA $$$$$$$$$$$$$$$$$$$$$$$$\n\n");
    printf("Please, introduce the measure of the first side of the triangle: ");
    scanf("%f", &a);
    printf("\nPlease, introduce the measure of the second side of the triangle: ");
    scanf("%f", &b);
    printf("\nPlease, introduce the measure of the third side of the triangle: ");
    scanf("%f", &c);

    //Doing operations.....
    printf("\n\n\tDoing the operation of the HERON'S FORMULA....\n");
    s = (a + b + c) / DIVIDER;
    P = sqrt(s * (s-a) * (s-b) * (s-c));

    //Print the solution....
    printf("\n\nThe Area P of the HERON'S FORMULA is: %g\n\n", P);
}
