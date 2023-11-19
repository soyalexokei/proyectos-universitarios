/*  Make a program that takes a word and writes it out backwards (maximum of 10 letters).
(word: program would be: margorp). */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//To define ctes....
#define MAX_CHAR 11

void main()
{
    //To declare an array for saving the word...
    char word[MAX_CHAR];
    //To declare other variables...
    char aux;
    int i, j, counter = 0;

    //Start the Program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$ BACKWARDS WORDS $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");

    //To introduce by keyboard...
    printf("Please, introduce a word of maximum 10 letters: ");
    fflush(stdin);
    fgets(word,MAX_CHAR,stdin);
    //To change the \n by \0...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(word[i] == '\n')
        {
            word[i] = '\0';
        }
    }

    //To do the main part of the program and to print it....
    printf("\n\nThe backward word is: ");
    for(i=strlen(word)-1; i>=0; i--)
    {
        printf("%c", word[i]);
    }
    printf(".\n\n");
}
