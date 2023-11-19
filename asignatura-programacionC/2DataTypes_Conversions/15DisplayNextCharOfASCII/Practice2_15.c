/* 2.15. Program about reading a character, and display the next character from the ASCII table. */
#include <stdio.h>

#define NEXT_CHAR 1 //The const that must be used for adding to the next character.

void main()
{
    //To declare a character variable that the user has to introduce.
    //And to declare the integer variable that it represent the value of a character in ASCII.
    char w;
    int value_char;

    //Start the program.....
    printf("\nPlease, introduce a character: ");
    scanf("%c", &w);

    //Doing operations.....
    printf("\n Doing the add of going on to the next character.... \n");
    value_char = (int)w + NEXT_CHAR;

    //Print the integer part separtly of the decimal part.
    printf("\nThe value of the next character: %d, ", value_char);
    printf("from the value of the previous character that the user has introduced: %d, ", (int)w);
    printf("correspond with the character: %c\n\n", (char)value_char);
}
