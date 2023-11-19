/* 5.5. Program about making a program that adds up all the numbers from 1 to n.*/
#include <stdio.h>

void main()
{
    //To declare the final number variable.
    int num;
    //To declare the counter i variable and the sum to add every numbers from 1 until num.
    int i, sum = 0;

    //Start the program....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$ PRINTING THE TOTAL SUM $$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("Please, introduce your final number: ");
    scanf("%d", &num);

    //To do the iteration and to add up every number....
    printf("\n\n");
    for(i=1; i<=num; i++)
    {
        sum += i;
    }

    //To print the results....
    printf("\n\nThe total of the sum is: %d\n\n",sum);
}
