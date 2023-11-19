/* 1.8. Program about reading two numbers as integer variables, print their values before the swap like:
“Before: x = … y=…”, then swap their values, so that y becomes x, and x becomes y,
and then, print: “After: x = … y=…”. */
#include <stdio.h>

int main (void)
{
    //Variables.
    int x; //Variable of the first digit.
    int y; //Variable of the second digit.
    int aux; //Storage variable used by the Bubble Method, as auxiliar.

    //Answer the two questions.
    printf("\nWrite the first digit (between 0 to 9): x = ");
    scanf("%d", &x);
    while((x<0) || (x>9))
    {
        printf("\tYou have to introduce a number in the first digit between 0 to 9.\n");
        printf("Write the first digit (between 0 to 9): x = ");
        scanf("%d", &x);
    }
    printf("Write the second digit (between 0 to 9): y = ");
    scanf("%d", &y);
    while((y<0) || (y>9))
    {
        printf("\tYou have to introduce a number in the second digit between 0 to 9.\n");
        printf("Write the second digit (between 0 to 9): y = ");
        scanf("%d", &y);
    }

    //The digits and the number before the swap.
    printf("\nBefore applied the Bubble Method: x = %d and y = %d", x, y);
    printf("\nAnd the number together is xy = %d%d\n", x, y);

    //Doing the Bubble Method.
    aux = x;
    x = y;
    y = aux;

    //The digits and the number after the swap.
    printf("\nAfter applied the Bubble Method: x = %d and y = %d", x, y);
    printf("\nAnd the number together is xy = %d%d\n", x, y);
    return 0;
}
