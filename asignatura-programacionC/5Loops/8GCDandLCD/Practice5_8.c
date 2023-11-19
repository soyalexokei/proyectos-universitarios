/* 5.8. Program about making a program that finds the greatest common divisor (GCD) and lowest common denominator (LCD)
of two numbers (a and b). GCD can be found found by the Euclid’s algorithm, while the Lowest common
denominator is found by the formula: LCD = a*b / GCD(a,b).*/
#include <stdio.h>

void main()
{
    //To declare two entering numbers as variables for obtaining the GCD and the LCD. Important to declare a auxiliar variable.
    int a, b, GCD, LCD, aux;
    //To declare reminded variables of a and b.
    int num1, num2;

    //Start the program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$ GCD & LCD $$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\nPlease, introduce the number A: ");
    scanf("%d", &a);
    printf("Please, introduce the number B: ");
    scanf("%d", &b);

    num1 = a;
    num2 = b;

    //To do the respective iterations of the GCD.
    while(b != 0)
    {
        aux = b;
        b = a % b;
        a = aux;
    }
    GCD = a;
    LCD = (num1 * num2) / GCD;

    //To print the results....
    printf("\n\nThe Greatest Common Divisor (GCD) among %d and %d is %d.\n", num1, num2, GCD);
    printf("The Lowest Common Denominator (LCD) among %d and %d is %d.\n\n", num1, num2, LCD);
}
