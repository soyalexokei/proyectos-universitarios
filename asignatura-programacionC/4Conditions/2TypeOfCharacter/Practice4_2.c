/* 4.2. Program about making a program that checks whether the character that the user entered is a lower-case letter, capital
letter, special character, or a number. */
#include <stdio.h>

//To declare the consts of ASCII Table.
#define FIRST_CL 'A'
#define LAST_CL 'Z'
#define FIRST_LL 'a'
#define LAST_LL 'z'
#define MIN_NUM '0'
#define MAX_NUM '9'

void main()
{
    //To declare the variable of the character that you enter by the keyboard.
    char yourChar;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$ TYPE OF CHARACTER $$$$$$$$$$\n\n");
    printf("Please, introduce whatever character you want: ");
    scanf("%c", &yourChar);

    //Doing the conditions and print the results.
    if((yourChar > FIRST_LL) && (yourChar < LAST_LL))
    {
        //Print that the solution is a lower-case letter.
        printf("\n\nYour character %c is a: lower-case letter\n\n", yourChar);
    }
    else if((yourChar > FIRST_CL) && (yourChar < LAST_CL))
    {
        //Print that the solution is a capital letter.
        printf("\n\nYour character %c is a: capital letter\n\n", yourChar);
    }
    else if((yourChar > MIN_NUM) && (yourChar < MAX_NUM))
    {
        //Print that the solution is a number.
        printf("\n\nYour character %c is a: number\n\n", yourChar);
    }
    else
    {
        //Print that the solution is a special character.
        printf("\n\nYour character %c is a: special character\n\n", yourChar);
    }
}
