/* 2.5. Program about introducing two int numbers, divide them into a float variable (first cast int number 1 into float
domain, such as: float_no=(float)int_no1/int_no2). */

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
    result = (float)num1 / (float)num2;

    //Printing the results....
    printf("\n\nThe float result of the division is: %f\n", result);
    return 0;
}
