/* 2.2. Program about introducing a float number and display it. */

#include <stdio.h>

int main (void)
{
    //To declare variables.
    float number;

    //Start the program....
    printf("\nPlease, write a float number: ");
    scanf("%f", &number);

    printf("The number that has been introduced is: %f\n", number);
    return 0;
}
