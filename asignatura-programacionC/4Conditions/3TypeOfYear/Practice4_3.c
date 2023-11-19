/* 4.3. Program about making a program that checks whether the entered year is a leap year
• The year is entered as an int
• The program displays the text "leap year" or "common year". */
#include <stdio.h>

void main()
{
    //To declare the variable of the year that you are going to enter.
    int typeYear;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$ TYPE OF YEAR $$$$$$$$$$\n\n");
    printf("Please, introduce whatever year you want: ");
    scanf("%d", &typeYear);

    //Doing the conditions and print the results.
    if((typeYear % 4 == 0 && typeYear % 100 != 0) || (typeYear % 400 == 0))
    {
        //Print that the solution is leap year.
        printf("\n\nYour year %d is a leap year\n\n", typeYear);
    }
    else
    {
        //Print that the solution is a common year.
        printf("\n\nYour year %d is a common year, so it is not a leap year.\n\n", typeYear);
    }
}
