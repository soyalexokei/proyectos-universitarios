/*  Make a program that takes a string and writes out the numbers in the string (maximum of 15
characters). */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//To define ctes....
#define MAX_CHAR 16

void main()
{
    //To declare an array for saving the string...
    char tweet[MAX_CHAR];
    //To declare an array for saving the numbers...
    char numbers[MAX_CHAR];
    //To declare other variables...
    int i, j = 0;

    //Start the Program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$ Numbers in a String $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");

    //To introduce by keyboard...
    printf("Please, introduce a Tweet of maximum 15 characters: ");
    fflush(stdin);
    fgets(tweet,MAX_CHAR,stdin);
    //To change the \n by \0...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(tweet[i] == '\n')
        {
            tweet[i] = '\0';
        }
    }

    //To find the numbers in the string...
    for(i=0; i<strlen(tweet); i++)
    {
        if(tweet[i] >= '0' && tweet[i] <= '9')
        {
            numbers[j] = tweet[i];
            j++;
        }
    }

    //To print out all numbers of the string...
    if(numbers[0] == '\0')
    {
        printf("\n\nThere are no numbers in the string %s.\n\n", tweet);
    }
    else if(numbers[1] == '\0')
    {
        printf("\n\nThe number, which is in the string %s, is: %s.\n\n", tweet, numbers);
    }
    else
    {
        printf("\n\nThe numbers, which are in the string %s, are: %s.\n\n", tweet, numbers);
    }
}
