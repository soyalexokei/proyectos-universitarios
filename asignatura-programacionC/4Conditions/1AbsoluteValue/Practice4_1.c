/* 4.1. Program about making a program that calculates the absolute value of a number
• User is prompted for a number and the program prints out its absolute value. */
#include <stdio.h>

void main()
{
    //To declare the variable of.
    int num;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$ ABSOLUTE VALUE $$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("Please, introduce a number: ");
    scanf("%d", &num);

    //Doing the conditions and printing the result.
    if(num < 0)
    {
        printf("\n\nYour number is: %d\n\n", -num);
    }
    else
    {
        printf("\n\nYour number is: %d\n\n", num);
    }
}
