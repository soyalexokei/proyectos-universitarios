/* 3.6. Program about making a program to convert a 3-digit number (for example 152) into three variables of type char
(same as int just takes 1 byte of memory, and since we will store just numbers 0 – 9, it is enough):
– s – for hundreds
– d – for tens
– j – for ones,
– and display the number of hundreds, tens, and ones (for 152 that is: 1, 5, and 2). */
#include <stdio.h>

//To declare the consts of substract 100 and 10.
#define HUNDREDS 100
#define TENS 10

void main()
{
    //To declare the 3-digit number variable, and three variables for hundreds, tens and ones.
    int digits, s, d, j;
    //Converted variables of type char.
    char s_char, d_char, j_char;

    //Start the program.....
    printf("\n\n$$$$$$$$$$ S E P A R A T E    T H E    D I G I T S    O F    A   N U M B E R $$$$$$$$$$\n\n");
    printf("Please, introduce a number with 3 digits: ");
    scanf("%d", &digits);

    //Doing operations.....
    printf("\n\n\tDoing the operation of Separate the digits of the written number....\n\n");
    s = digits / HUNDREDS;
    d = (digits / TENS) - (s * TENS);
    j = digits - (s * HUNDREDS) - (d * TENS);
    printf("\t***************************************************************************\n");
    printf("\tConvert the s, d and j to type char variables\n\n");
    s = s + 48;
    d = d + 48;
    j = j + 48;
    s_char = (char)s ;
    d_char = (char)d;
    j_char = (char)j;

    //Print the solution....
    printf("\n\nYour number is %c%c%c, whom hundreds are: %c, tens are: %c and ones are: %c\n\n", s_char, d_char, j_char, s_char, d_char, j_char);
}
