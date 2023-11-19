/* 5.4. Program about making a program that prints out all the numbers from 1 to n, which are divisible by 3.*/
#include <stdio.h>

void main()
{
    //To declare the final number variable.
    int num;
    //To declare the counter i variable.
    int i;

    //Start the program....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$ PRINTING NUMBERS % 3 $$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("Please, introduce your final number: ");
    scanf("%d", &num);

    //To do the iterations and to print the results....
    printf("\n\n");
    for(i=1; i<=num; i++)
    {
        if(i % 3 == 0)
        {
            printf(" %d",i);
        }
    }
    printf("\n\n");
}
