/*  Make a program that takes two words from the user, and checks whether the second word is
a part of the first word (maximum of 15 characters). */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//To define ctes....
#define MAX_CHAR 16

void main()
{
    //To declare an array for saving the long word and the short word...
    char string1[MAX_CHAR];
    char string2[MAX_CHAR];
    //To declare other variables...
    int i;

    //Start the Program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$ Part of the first word $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");

    //To introduce by keyboard...
    printf("Please, introduce a string of maximum 15 characters: ");
    fflush(stdin);
    fgets(string1,MAX_CHAR,stdin);
    printf("Please, introduce a shorter string than the previous one: ");
    fflush(stdin);
    fgets(string2,MAX_CHAR,stdin);
    //To change the \n by \0...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(string1[i] == '\n')
        {
            string1[i] = '\0';
        }
        if(string2[i] == '\n')
        {
            string2[i] = '\0';
        }
    }

    //To do the main part of the program and to print...
    if(strstr(string1, string2))
    {
        printf("\n\nThe second word \"%s\" was found in the first word \"%s\".\n\n", string2, string1);
    }
    else
    {
        printf("\n\nThe second word \"%s\" was NOT found in the first word \"%s\".\n\n", string2, string1);
    }
}
