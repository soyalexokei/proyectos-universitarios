/* 5.13. Program about making a program that prompts the user for a number and depending on the number draws the following table: ...*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    //To declare the number variable, and the counters i and j. And aux variable to print from 1 to num.
    int num, i, j, blank;

    //Start the program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$ DIAMOND OF NUMBERS $$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");

    //To do the iterations and to print the results....
    do
    {
        printf("\n\nPlease, introduce a number: ");
        scanf("%d", &num);
        if(num < 1)
        {
            printf("\n\nINCORRECT: YOU CANNOT INTRODUCE A NUMBER LESS THAN 1.\n");
            printf("PLEASE, INTRODUCE AGAIN THE NUMBER.\n\n");
        }
        else
        {
            printf("\n\n");
            blank = num - 1; //To know the number of blanks that there are.
            for(i=1; i<=num; i++)
            {
                for(j=1; j<=blank; j++)
                {
                    printf(" ");
                }
                blank--;
                for(j=1; j<=i; j++)
                {
                    printf("%d", j);
                }
                for(j=i-1; j>0; j--)
                {
                    printf("%d", j);
                }
                printf("\n");
            }
            blank = 1;
            for(i=num-1; i>0; i--)
            {
                for(j=1; j<=blank; j++)
                {
                    printf(" ");
                }
                blank++;
                for(j=1; j<=i; j++)
                {
                    printf("%d", j);
                }
                for(j=i-1; j>0; j--)
                {
                    printf("%d", j);
                }
                printf("\n");
            }
            printf("\n\n");
        }

    }while(num < 1);
}
