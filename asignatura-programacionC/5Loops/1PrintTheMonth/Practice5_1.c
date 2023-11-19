/* 5.1. Program about making a program that, depending on the integer input (1 to 12), prints out the corresponding month. */
#include <stdio.h>

//To declare the consts of the first and last month.
#define FIRST_MONTH 1
#define LAST_MONTH 12

void main()
{
    //To declare the month variable.
    int month;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$ MONTHS OF A YEAR $$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("Please, introduce the number of the month that you want: ");
    scanf("%d", &month);

    if((month<FIRST_MONTH) || (month>LAST_MONTH))
    {
        printf("\n\nPLEASE, INTRODUCE A CORRECT NUMBER OF MONTH!!!!\n\n");
    }
    else
    {
        switch(month)
        {
            case FIRST_MONTH:
                printf("\n\nYour introduced month is: JANUARY.\n\n");
                break;
            case FIRST_MONTH+1:
                printf("\n\nYour introduced month is: FEBRUARY.\n\n");
                break;
            case FIRST_MONTH+2:
                printf("\n\nYour introduced month is: MARCH.\n\n");
                break;
            case FIRST_MONTH+3:
                printf("\n\nYour introduced month is: APRIL.\n\n");
                break;
            case FIRST_MONTH+4:
                printf("\n\nYour introduced month is: MAY.\n\n");
                break;
            case FIRST_MONTH+5:
                printf("\n\nYour introduced month is: JUNE.\n\n");
                break;
            case LAST_MONTH-5:
                printf("\n\nYour introduced month is: JULY\n\n");
                break;
            case LAST_MONTH-4:
                printf("\n\nYour introduced month is: AUGUST.\n\n");
                break;
            case LAST_MONTH-3:
                printf("\n\nYour introduced month is: SEPTEMBER.\n\n");
                break;
            case LAST_MONTH-2:
                printf("\n\nYour introduced month is: OCTOBER\n\n");
                break;
            case LAST_MONTH-1:
                printf("\n\nYour introduced month is: NOVEMBER.\n\n");
                break;
            default:
                printf("\n\nYour introduced month is: DECEMBER.\n\n");

        }
    }
}
