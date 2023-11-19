/* 2.9. Program about introducing  one integer (int) number (a), one float number (b) and one character (char) (c). Display
variable a represented as a HEX value, b as an exponential value, and c as a character value and
its ASCII code. */
#include <stdio.h>

int main (void)
{
    //To declare variables.
    int a; //Integer number.
    float b; //Float number.
    char c; //Character.

    //Start the program....
    printf("\nPlease, introduce a integer number: ");
    scanf("%d", &a);
    printf("\nPlease, introduce a float number: ");
    scanf("%f", &b);
    printf("\nPlease, introduce a character: ");
    scanf(" %c", &c); //Remind to leave a space because if not, you cannot introduce a char and go on to the next step without the character.

    //Doing the operations....
    /* NO OPERATIONS */

    //Printing the results....
    printf("\n\nThe value of the integer number in HEX is: %x\n", a);
    printf("\n\nThe value of the float number in EXP is: %e\n", b);
    printf("\n\nThe value of the character is: %d\n", c);
    return 0;
}
