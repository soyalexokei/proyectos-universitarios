/* 5.14. Program about making a program that using a for loop, it is going to get a program that will print out the multiplication table in the following format: ... */
#include <stdio.h>
#define FINAL_NUM 10

void main()
{
    //To declare the counter i and j variables.
    int i, j;

    //Start the program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$ MULTIPLICATION TABLE $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");

    //Doing the operations and printing the results...
    printf("\n\n");
    for(i=1; i<=FINAL_NUM; i++)
    {
        for(j=1; j<=FINAL_NUM; j++)
        {
            printf("%4.d", i * j); //%4.d is for organizing the table.
        }
        printf("\n");
    }
    printf("\n\n");
}
