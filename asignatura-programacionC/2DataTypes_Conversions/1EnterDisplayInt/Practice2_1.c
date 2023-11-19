/* 2.1. Program about introducing an int number with scanf() and display it with printf(). */

#include <stdio.h>

int main (void)
{
    //To declare variables.
    int number;

    //Start the program....
    printf("\nPlease, write an integer number: ");
    scanf("%d", &number);

    printf("The number that has been introduced is: %d\n", number);
    return 0;
}
