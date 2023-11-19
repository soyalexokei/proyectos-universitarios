/* 4.4. Program about making a program that will check whether the solution to <operation in PDF> that
it is positive or negative, and whether it exists at all. */
#include <stdio.h>

void main()
{
    //To declare the mystery variable, and a store variable.
    float x, sol;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$ Resolve the ecuation $$$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
    printf("Please, introduce a number to obtain a solution: ");
    scanf("%f", &x);

    //Doing the conditions and print the results.
    sol = (x-5)*(x-3) / (x-2);

    if((x-2) == 0)
    {
        printf("\n\nThe solution of the equation does not exists.\n\n");
    }
    else if(sol < 0)
    {
        printf("\n\nThe solution of the equation is (-)negative.\n\n");
    }
    else
    {
        printf("\n\nThe solution of the equation is (+)positive.\n\n");
    }

}
