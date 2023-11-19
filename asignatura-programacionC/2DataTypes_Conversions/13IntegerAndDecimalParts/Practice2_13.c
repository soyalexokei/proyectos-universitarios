/* 2.13. Program about entering a floating point number (float) and display its integer part (conversion %d) and the
decimal part after the floating point (use conversion %g to omit the following zeros).
eg: number 3.25 should be displayed as 3 and 0.25. */
#include <stdio.h>

void main()
{
    //To declare float variable for the number and the number only with decimals.
    float num, decimal_num;

    //Start the program....
    printf("\nPlease, introduce a number with decimals: ");
    scanf("%f", &num);

    //Doing operations.....
    decimal_num = num - (int)num;

    //Print the integer part separtly of the decimal part.
    printf("\nThe integer part of the introduced number is %d and ", (int)num);
    printf("the decimal part of the introduced number is %g \n\n", decimal_num);
}
