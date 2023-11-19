/* 5.9. Program about making a program that prompts the user for an integer (n) and then prints out all the numbers from 1 to
n that are divisible by 17.*/
#include <stdio.h>

void main()
{
    //To declare a introduced integer number by the user. And to declare the integer counter i for prints out from 1 to num.
    int num, i;

    //Start the program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$ DIVISIBLE NUMBERS BY 17 $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\nPlease, introduce a number: ");
    scanf("%d", &num);

    //To do the iterations and to print the results....
    printf("\n\n");
    for(i=1; i<=num; i++)
    {
        if(i % 17 == 0)
        {
            printf(" %d",i);
        }
    }
    printf("\n\n");
}
