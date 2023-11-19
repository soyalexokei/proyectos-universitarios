/*  Make the program that takes two words from the user, and concatenates them to a string with
a space in between and then display the final string. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//To define ctes....
#define MAX_CHAR 16
#define MAX_FINAL 32

void main()
{
    //To declare an array for saving the string.
    char wordA[MAX_CHAR];
    char wordB[MAX_CHAR];
    char stringFinal[MAX_FINAL];

    //To declare other variables...
    int i, j;

    //Start the Program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$ Concatenate two words in a string between one space $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");

    //To introduce by keyboard...
    printf("Please, write the first word of maximum 15 characters: ");
    fflush(stdin);
    fgets(wordA,MAX_CHAR,stdin);
    printf("Please, write the second word of maximum 15 characters: ");
    fflush(stdin);
    fgets(wordB,MAX_CHAR,stdin);
    //To change the \n by \0...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(wordA[i] == '\n')
        {
            wordA[i] = '\0';
        }
        if(wordB[i] == '\n')
        {
            wordB[i] = '\0';
        }
    }

    //To do the main part of the program...
    for(i=0; i<=strlen(wordA); i++)
    {
        if(i == strlen(wordA))
        {
            stringFinal[i] = ' ';
        }
        else
        {
            stringFinal[i] = wordA[i];
        }
    }

    j = strlen(wordA) + 1;
    for(i=0; i<=strlen(wordB); i++)
    {
        stringFinal[j] = wordB[i];
        j++;
    }

    //To print the result...
    printf("\n\nThe concatenated string is: %s.\n\n", stringFinal);
}
