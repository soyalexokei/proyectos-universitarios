/* 2.14. Program about reading the letter ‘a’. From its ASCII value subtract 32 and display the value as a character (“%c”). */
#include <stdio.h>

#define SUBTRACTING 32 //The const that must be used for subtracting.

void main()
{
    //To declare a character variable that the user has to introduce.
    //And to declare the integer variable that it represent the value of a character in ASCII.
    char w = 'a';
    int value_char;

    //Start the program.....
    printf("\nThe character that it is going to read is: %c\n", w);
    printf("Its ASCII value is: %d\n", (int)w);

    //Doing operations.....
    printf("\n Doing the subtract of value of character 'a' - 32.... \n");
    value_char = (int)w - SUBTRACTING;

    //Print the integer part separtly of the decimal part.
    printf("\nThe value of %d correspond with the character: %c\n\n", value_char, (char)value_char);
}
