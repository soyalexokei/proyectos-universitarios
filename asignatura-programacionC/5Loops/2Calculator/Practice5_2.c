/* 5.2. Program about making a calculator that takes input of two integers, a character to pick the operation (+, -, *, /), and
prints the result. */
#include <stdio.h>

void main()
{
    //To declare the two operating variables, the operator variable and the result variable.
    int a, b, result;
    char op;
    //To declare a logical variable for repeating the process if the user has introduced something wrong.
    int logical = 1;

    //Start the program and to do the iteration....
    do
    {
        printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$ CALCULATOR $$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("Please, introduce the first operating: ");
        scanf("%d", &a);
        printf("Please, introduce the operator: ");
        scanf(" %c", &op);
        printf("Please, introduce the second operating: ");
        scanf("%d", &b);
        switch(op)
        {
            case '+':
                result = a + b;
                logical = 1;
                break;
            case '-':
                result = a - b;
                logical = 1;
                break;
            case '*':
                result = a * b;
                logical = 1;
                break;
            case '/':
                if(b == 0)
                {
                    printf("\n\nSYNTAX SERBIAN ERROR!!!\n\n");
                    logical = 0;
                }
                else
                {
                    result = a / b;
                    logical = 1;
                }
                break;
            default:
                printf("\n\nPLEASE, INTRODUCE A CORRECT OPERATOR!!!!\n\n");
                logical = 0;
        }
    }while(logical == 0);

    //To print the solution.....
    printf("\n\n%d %c %d = %d\n\n", a, op, b, result);
}
