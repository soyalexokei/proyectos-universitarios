/* 1.7. Program about asking the user how old are his mother, his father and him,
and print the total years lived by the three of them. */
#include <stdio.h>

int main (void)
{
    int age1; //Variable of the age of his mother.
    int age2; //Variable of the age of his father.
    int age3; //Variable of his age.
    int totalAges; //Storage variable of how much time have lived them.

    //Answer the two questions.
    printf("\nHow old is your mother? : ");
    scanf("%d", &age1);
    printf("How old is your father? : ");
    scanf("%d", &age2);
    printf("How old are you? : ");
    scanf("%d", &age3);

    //Doing the operations.
    totalAges = age1 + age2 + age3;

    //Print the results.
    printf("\nThe total years lived by the three of them is: %d years.\n", totalAges);
    return 0;
}
