/*  Make a program that changes digits in a string into their word-representation (only digits 0-
9). For example: 5 euros should be changed to five euros. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//To define ctes....
#define MAX_CHAR 21

void main()
{
    //To declare an array for saving the string.
    char string[MAX_CHAR];
    char string2[MAX_CHAR];
    //To declare other variables...
    int i, j;
    char aux;

    //Start the Program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$ Number - Word Representation $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");

    //To introduce by keyboard...
    printf("Please, write a price between 0 and 9, and the currency in words: ");
    fflush(stdin);
    fgets(string,MAX_CHAR,stdin);
    //To change the \n by \0...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(string[i] == '\n')
        {
            string[i] = '\0';
        }
    }

    //To do the main part of the program...
    for(i=0; i<strlen(string); i++)
    {
        if(string[i] >= '0' && string[i] <= '9')
        {
            aux = string[i];
        }
    }

    //To put the price in words...
    switch(aux)
    {
        case '0':
            strcpy(string2, "zero");
            break;
        case '1':
            strcpy(string2, "one");
            break;
        case '2':
            strcpy(string2, "two");
            break;
        case '3':
            strcpy(string2, "three");
            break;
        case '4':
            strcpy(string2, "four");
            break;
        case '5':
            strcpy(string2, "five");
            break;
        case '6':
            strcpy(string2, "six");
            break;
        case '7':
            strcpy(string2, "seven");
            break;
        case '8':
            strcpy(string2, "eight");
            break;
        case '9':
            strcpy(string2, "nine");
            break;
    }

    j = strlen(string2);
    string2[j] = ' ';
    j++;
    for(i=0; i<=strlen(string); i++)
    {
        if((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z'))
        {
            string2[j] = string[i];
            j++;
        }
        else if(string[i] == '\0')
        {
            string2[j] = '\0';
        }
    }

    //To print the price and the currency in words...
    printf("\n\nYour string has changed to: %s.\n\n", string2);
}
