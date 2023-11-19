/*  Make a program that checks whether a word is a palindrome (maximum of 10 letters). A
palindrome is a word that reads the same backwards as forwards, such as anna. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//To define ctes....
#define MAX_CHAR 11

void main()
{
    //To declare an array for saving the introduced word...
    char word[MAX_CHAR];
    //To declare an array for saving the reversed word...
    char reverse[MAX_CHAR];
    //To declare other variables...
    int i, j = 0, result;

    //Start the Program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$ Palindrome WORDS $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
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

    //To do the main part of the program and to print...
    for(i=strlen(word)-1; i>=0; i--)
    {
        reverse[j] = word[i];
        j++;
    }

    result = strcmp(word, reverse);
    if(result == 0)
    {
        printf("\n\nThe word %s is a PALINDROME.\n\n", word);
    }
    else
    {
        printf("\n\nThe word %s is NOT a PALINDROME.\n\n", word);
    }
}
