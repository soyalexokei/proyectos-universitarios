/* 2.3. Program about introducing two int numbers, divide them into an int variable (integer division) and display the
result. */

#include <stdio.h>

int main (void)
{
    //To declare variables.
    int num1; //Dividend.
    int num2; //Dividing.
    int result; //Quotient.

    //Start the program....
    printf("\nPlease, introduce the first integer number: ");
    scanf("%d", &num1);
    printf("Please, introduce the second integer number: ");
    scanf("%d", &num2);

    //Doing the operations....
    result = num1 / num2;

    //Printing the results....
    printf("\n\nThe result of the division is: %d\n", result);
    return 0;
}
