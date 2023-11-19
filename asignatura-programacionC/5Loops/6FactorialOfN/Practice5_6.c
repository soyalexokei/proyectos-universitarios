/* 5.6. Program about making a program that calculates the factorial of n.*/
#include <stdio.h>

void main()
{
    //To declare the entering final number variable.
    int num;
    //To declare the counter i variable, and the store variable.
    int i, store = 1;

    //Start the program....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$ PRINTING THE FACTORIAL $$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("Please, introduce your factorial number: ");
    scanf("%d", &num);

    //To do the iteration for obtaining the factorial of num.
    printf("\n\n");
    for(i=2; i<=num; i++)
    {
        store *= i;
    }

    //To print the results....
    printf("\n\n%d! = %d\n\n", num, store);

}
