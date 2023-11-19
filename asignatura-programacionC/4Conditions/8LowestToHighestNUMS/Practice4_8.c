/* 4.8. Program about making a program that prompts the user for input of three numbers. The program then prints out the
three numbers sorted from lowest to highest */
#include <stdio.h>

void main()
{
    //To declare three variables by the three numbers that the user has to enter.
    int num1, num2, num3;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$ SORTING OF NUMBERS $$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("Please, introduce the first number: ");
    scanf("%d", &num1);
    printf("Please, introduce the second number: ");
    scanf("%d", &num2);
    printf("Please, introduce the third number: ");
    scanf("%d", &num3);

    //Doing the conditions and print the results.
    if(num1 < num2 && num1 < num3 && num2 < num3)
    {
        printf("\n\nSolution: %d < %d < %d\n\n", num1, num2, num3);
    }
    else if(num1 > num2 && num1 < num3)
    {
        printf("\n\nSolution: %d < %d < %d\n\n", num2, num1, num3);
    }
    else if(num1 > num2 && num1 > num3 && num2 < num3)
    {
        printf("\n\nSolution: %d < %d < %d\n\n", num2, num3, num1);
    }
    else if(num1 > num2 && num1 > num3 && num2 > num3)
    {
        printf("\n\nSolution: %d < %d < %d\n\n", num3, num2, num1);
    }
    else if(num1 < num2 && num1 > num3)
    {
        printf("\n\nSolution: %d < %d < %d\n\n", num3, num1, num2);
    }
}
