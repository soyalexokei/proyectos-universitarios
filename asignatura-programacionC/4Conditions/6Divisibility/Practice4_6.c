/* 4.6. Program about making a program to check whether one number is divisible by the second number. User inputs both
numbers. Program then performs the check and prints out whether they are divisible. If the user tries
to divide by zero, print out an error.
 */
#include <stdio.h>
#include <math.h>

void main()
{
    //To declare the dividend and the dividing variables.
    int dividend, dividing;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$ DIVISIBLE NUMBERS $$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("Please, introduce the integer dividend: ");
    scanf("%d", &dividend);
    printf("Please, introduce the integer dividing: ");
    scanf("%d", &dividing);

    //Doing the conditions and print the results.
    if((dividing == 0) || (dividend == 0 && dividing == 0))
    {
        printf("\n\nSYNTAX ERROR!!!!!\n\n");
    }
    else
    {
        if(dividend % dividing == 0)
        {
            printf("\n\nThe number %d is divisible between the number %d.\n\n", dividend, dividing);
        }
        else
        {
            printf("\n\nThe number %d is NOT divisible between the number %d.\n\n", dividend, dividing);
        }
    }
}
