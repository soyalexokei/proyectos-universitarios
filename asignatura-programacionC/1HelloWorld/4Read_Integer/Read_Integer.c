/* 1.4. Program about reading the value of the integer variable (scanf function),
and print its value on the screen.*/
#include <stdio.h>

int main (void)
{
    int num;
    printf("\nWrite your favourite integer number: ");
    scanf("%d", &num);
    printf("\n%d is the number that you chose.\n", num);
    return 0;
}
