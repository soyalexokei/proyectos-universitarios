/* 1.6. Program about asking the user for the current year and the year when he was born,
and print how old is the person becoming this year.*/
#include <stdio.h>

int main (void)
{
    int year; //Variable of the year where we are.
    int born; //Variable of the year when I was born.
    int age; //Storage variable of the actual age of the user.

    //Answer the two questions.
    printf("\nWhich is the year where we are? : ");
    scanf("%d", &year);
    printf("Which year were you born? : ");
    scanf("%d", &born);

    //Doing the operations.
    age = year - born;

    //Print the results.
    printf("\nIn %d you are: %d years.\n", year, age);
    return 0;
}
