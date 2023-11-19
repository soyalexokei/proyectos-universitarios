/* 5.7. Program about making a program that prints out all the three-digit numbers that are divisible by the number you get
when you take out the second digit ((ABC)%(AC) == 0).*/
#include <stdio.h>

void main()
{
    //To declare the entering final number variable, and the digits one by one.
    int abc, a, b, c;
    //To declare the variable without the b digit.
    int ac;

    //Start the program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$ DIVISIBILITY $$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\nPlease, introduce a number of 3 digits: ");
    scanf("%d", &abc);

    //To do the respective operations and iterations. And print the results....
    a = abc / 100;
    b = (abc /10) - (a * 10);
    c = abc - ((a * 100) + (b * 10));
    ac = (a * 10) + c;

    if(abc % ac == 0)
    {
        printf("\n\n%d is the number that is divisible by %d.\n\n", abc, ac);
    }
    else
    {
        printf("\n\nChoose other number of 3 digits, please!!\n\n");
    }
}
