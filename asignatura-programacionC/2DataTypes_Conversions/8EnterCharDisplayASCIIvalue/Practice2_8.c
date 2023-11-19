/* 2.8. Program about introducing one character (char), and display its ASCII value (%d). */
#include <stdio.h>

int main (void)
{
    //To declare variables.
    char caracter; //A char variable.

    //Start the program....
    printf("\nPlease, introduce a character: ");
    scanf("%c", &caracter);

    //Doing the operations....
    /* NO OPERATIONS */

    //Printing the results....
    printf("\n\nThe value of the character in its ASCII Table is: %d\n", caracter);
    return 0;
}
