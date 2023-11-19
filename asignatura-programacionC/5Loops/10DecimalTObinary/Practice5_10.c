/* 5.10. Program about making a program that prompts the user for a decimal integer and turns it into a binary number.*/
#include <stdio.h>

void main()
{
    //To declare the variables.
    int num, storage_num, binary_num = 0, weight = 1;

    //Start the program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$ CONVERTION FROM DECIMAL TO BINARY $$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\nPlease, introduce a number: ");
    scanf("%d", &num);

    storage_num = num;

    //To do the iterations and print the results...
    do
    {
        binary_num = binary_num + weight * (num % 2);
        num /= 2;
        weight = weight * 10;

    }while(num >= 1);

    printf("\n\nThe number %d in binary is: %d\n\n", storage_num, binary_num);
}
