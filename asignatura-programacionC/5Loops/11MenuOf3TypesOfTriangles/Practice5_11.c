/* 5.11. Program about making a program that prints out a menu with the following choices:
• Draw a right triangle
• Draw an isosceles triangle (triangle which has two same sides)
• Draw a rectangle.*/
#include <stdio.h>

void main()
{
    //To declare the option of the menu variable. The number of cols and rows variables. The counters i and j.
    int option, cols, rows, i, j;

    //Start the program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$ Choose the figure $$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n\n");
    do
    {
        printf("###################################");
        printf("\n");
        printf("############## MENU ###############");
        printf("\n");
        printf("###################################");
        printf("\n");
        printf("# 1. Draw a right triangle.       #");
        printf("\n");
        printf("# 2. Draw an isosceles triangle.  #");
        printf("\n");
        printf("# 3. Draw a rectangle.            #");
        printf("\n");
        printf("###################################");
        printf("\nPlease, introduce one option: ");
        scanf("%d", &option);

        //To do the iterations and to print the results....
        switch(option)
        {
            case 1:
                do
                {
                    printf("\n\nPlease, introduce the number of rows (min 2): ");
                    scanf("%d", &rows);
                    if(rows < 2)
                    {
                        printf("\n\nINCORRECT NUMBER OF ROWS. YOU NEED TO WRITE MORE THAN 1.\n\n");
                    }
                    else
                    {
                        printf("\n\n");
                        for(i=1; i<=rows; i++)
                        {
                            for(j=1; j<=rows; j++)
                            {
                                if(j <= i)
                                {
                                    printf("*");
                                }
                                else
                                {
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                        printf("\n\n");
                    }
                }while(rows < 2);
                break;
            case 2:
                do
                {
                    printf("\n\nPlease, introduce the number of rows (min 2): ");
                    scanf("%d", &rows);
                    if(rows < 2)
                    {
                        printf("\n\nINCORRECT NUMBER OF ROWS. YOU NEED TO WRITE MORE THAN 1.\n\n");
                    }
                    else
                    {
                        printf("\n\n");
                        for(i=1; i<=rows; i++)
                        {
                            for(j=1; j<2*rows; j++)
                            {
                                if(j > (rows - i) && j <= rows)
                                {
                                    printf("*");
                                }
                                else if(j < (rows + i) && j > rows)
                                {
                                    printf("*");
                                }
                                else
                                {
                                    printf(" ");
                                }
                            }
                            printf("\n");
                        }
                        printf("\n\n");
                    }
                }while(rows < 2);
                break;
            case 3:
                do
                {
                    printf("\n\nPlease, introduce the number of rows (min 2): ");
                    scanf("%d", &rows);
                    printf("Please, introduce the number of cols (min 3): ");
                    scanf("%d", &cols);
                    if(rows < 2 || cols < 3)
                    {
                        printf("\n\nINCORRECT NUMBER OF ROWS AND/OR COLS. YOU NEED TO WRITE MORE THAN 1 ROW AND MORE THAN 2 COLS.\n\n");
                    }
                    else
                    {
                        printf("\n\n");
                        for(i=1; i<=rows; i++)
                        {
                            for(j=1; j<=cols; j++)
                            {
                                printf("*");
                            }
                            printf("\n");
                        }
                        printf("\n\n");
                    }
                }while(rows < 2 || cols < 3);
                break;
            default:
                printf("\n\nINCORRECT OPTION. PLEASE, INTRODUCE A OPTION BETWEEN 1 TO 3.\n\n");
        }
    }while(option < 1 || option > 3);
}
