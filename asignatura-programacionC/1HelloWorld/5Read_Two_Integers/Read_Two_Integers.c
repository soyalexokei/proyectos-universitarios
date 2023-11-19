/* 1.5. Program about reading the values for two integer variables,
and print the results of adding, subtracting and multiplying them.*/
#include <stdio.h>

int main (void)
{
    int a; //Variable of the first number.
    int b; //Variable of the second number.
    int add; //Storage variable of the adding.
    int sub; //Storage variable of the subtracting.
    int mult; //Storage variable of the multiplying.

    //Introduce the two numbers.
    printf("\nWrite the first integer number: ");
    scanf("%d", &a);
    printf("Write the second integer number: ");
    scanf("%d", &b);

    //Doing the operations.
    add = a + b;
    sub = a - b;
    mult = a * b;

    //Print the results.
    printf("\nThe result of the adding is = %d", add);
    printf("\nThe result of the subtracting is = %d", sub);
    printf("\nThe result of the multiplying is = %d\n", mult);
    return 0;
}
