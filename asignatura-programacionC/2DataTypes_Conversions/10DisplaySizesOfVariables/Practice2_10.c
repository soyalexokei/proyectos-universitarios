/* 2.10. Program about making a program to display sizes of variables in bytes (sizeof operator). */
#include <stdio.h>

void main()
{
    //To declare variables.
    int a, size; //a is a integer number and size is a integer number that measures the amount of bytes of each variable.
    float b; //Float number.
    char c; //Character.
    double dbl; //Float double number.

    //Start the program....
    printf("\nPlease, introduce a integer number: ");
    scanf("%d", &a);
    printf("\nPlease, introduce a float number: ");
    scanf("%f", &b);
    printf("\nPlease, introduce a character: ");
    scanf(" %c", &c); //Remind to leave a space because if not, you cannot introduce a char and go on to the next step without the character.
    printf("\nPlease, introduce a float double number: ");
    scanf("%lf", &dbl);

    //Doing the 1º operation....
    size = sizeof(a);
    //Printing the result....
    printf("\n\nThe amount of bytes of the integer number is: %d\n", size);

    //Doing the 2º operation....
    size = sizeof(b);
    //Printing the result....
    printf("\n\nThe amount of bytes of the float number is: %d\n", size);

    //Doing the 3º operation....
    size = sizeof(c);
    //Printing the result....
    printf("\n\nThe amount of bytes of the character is: %d\n", size);

    //Doing the 4º operation....
    size = sizeof(dbl);
    //Printing the result....
    printf("\n\nThe amount of bytes of the double float number is: %d\n", size);
}
