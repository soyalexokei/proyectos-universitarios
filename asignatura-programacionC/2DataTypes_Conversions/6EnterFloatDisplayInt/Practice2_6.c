 /* 2.6. Program about introducing a float variable, and then display as an int value (%d). */
 #include <stdio.h>

int main (void)
{
    //To declare variables.
    float num; //A float variable.

    //Start the program....
    printf("\nPlease, introduce the float number: ");
    scanf("%f", &num);

    //Doing the operations....
    /* NO OPERATIONS */

    //Printing the results....
    printf("\n\nThe float result of the division is: %d\n", (int)num);
    return 0;
}
