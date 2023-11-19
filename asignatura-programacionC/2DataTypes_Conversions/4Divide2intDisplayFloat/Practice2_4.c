/* 2.4. Program about introducing two int numbers, divide them into a float variable (float_no=int_no1/int_no2) and display
the result (still integer division, although we defined a float variable?) */

#include <stdio.h>

int main (void)
{
    //To declare variables.
    int num1; //Dividend.
    int num2; //Dividing.
    float result; //Quotient.

    //Start the program....
    printf("\nPlease, introduce the first integer number: ");
    scanf("%d", &num1);
    printf("Please, introduce the second integer number: ");
    scanf("%d", &num2);

    //Doing the operations....
    result = num1 / num2;

    //Printing the results....
    printf("\n\nThe float result of the division is: %f\n", result);
    return 0;
}
