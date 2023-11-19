/* Make a program with the following options:
0. EXIT from the program.
1. Calculate n!
    – Enter the number n in main
    – Make a function to calculate the factorial, that takes n as an argument
    and returns the result.
2. Calculate the binomial coefficient.
    – Enter the numbers n and k
    – Check the conditions for n and k (bold) and if it’s ok
    – Calculate the binomial coefficient based on the formula:
    • For the factorial use the function from task 1.
3. Adding numbers
    – Enter 2 int numbers in main
    – Make a function to add the two numbers. If the sum is greater than 50
    return 1, and if not return 0. The sum itself should be returned via
    reference.
4. Switch numbers
    – Enter 2 int numbers in main
    – Make a function to switch values of these two variables
    – After returning from the function print the values of the variables (in
    main)
5. Make a program to enter and display integer array elements (maximum
100) with the following functions:
    1. Enter an element – enter one element to the array, the function takes
    as arguments the address of the array and the number of elements
    already entered in the array. If the maximum number of elements is
    not reached, then ask the user to enter a new element. If the
    maximum number is reached, display an adequate message.
    2. Display all entered elements from the array – the function takes as
    arguments the address of the array and the number of elements
    entered in the array.
    0. Exit. */
//Libraries of C Programming...
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//To define ctes....
#define FIFTY 50
#define MAX_ELEMENTS 101

//Headers of the Functions and Procedures...
int factorial();
int addingNumbers();
void switchNumbers();
void enteringValues();
void displayValues();

//The main program...
void main()
{
    //To declare arrays...
    int vector_num[MAX_ELEMENTS];

    //To declare variables...
    int option, num, n_fact, n, k, nk, result_n, result_k, result_nk, result_bc, x, y, result_add, i, j, counter = 0, op;

    //Start the Program....
    printf("\n");
    do
    {
        printf("\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$ MULTI-OPERATION PROGRAM 2022 $$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$             MENU OF THE PROGRAM:             $\n");
        printf("$                                              $\n");
        printf("$ 1. Factorial of a number.                    $\n");
        printf("$ 2. Binomial Coefficient.                     $\n");
        printf("$ 3. Adding numbers.                           $\n");
        printf("$ 4. Switch numbers.                           $\n");
        printf("$ 5. Playing with arrays.                      $\n");
        printf("$ 0. EXIT.                                     $\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("Which option do you want to choose? : ");
        scanf("%d", &option);
        printf("\n");
        if(option<0 || option>5)
        {
            printf("\nPlease, introduce a correct option!\n\n");
        }
        else
        {
            switch(option)
            {
                case 1:
                    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                    printf("$$$$$$$$$$$ Factorial of a number $$$$$$$$$$$\n");
                    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                    printf("Please, introduce your factorial number: ");
                    scanf("%d", &num);
                    n_fact = factorial(num);
                    printf("\n%d! = %d\n\n", num, n_fact);
                    break;
                case 2:
                    do
                    {
                        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                        printf("$$$$$$$$$$$ Binomial Coefficient $$$$$$$$$$$\n");
                        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                        printf("Please, introduce a number: ");
                        scanf("%d", &n);
                        printf("Please, introduce a smaller number than %d: ", n);
                        scanf("%d", &k);
                        if(n < k || k < 0)
                        {
                            printf("\nIncorrect introduced numbers! Please, introduce them again!\n\n");
                        }
                        else
                        {
                           result_n = factorial(n);
                           result_k = factorial(k);
                           nk = n - k;
                           result_nk = factorial(nk);
                           result_bc = result_n / (result_k * result_nk);
                           printf("\nThe Binomial Coefficient of n = %d and k = %d is: %d.\n\n", n, k, result_bc);
                        }
                    }while(n < k || k < 0);
                    break;
                case 3:
                    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                    printf("$$$$$$$$$$$ Adding numbers $$$$$$$$$$$\n");
                    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                    printf("Please, introduce the first number: ");
                    scanf("%d", &x);
                    printf("Please, introduce the second number: ");
                    scanf("%d", &y);
                    result_add = addingNumbers(x,y);
                    if(result_add == 1)
                    {
                        printf("\n%d means that the add is greater than 50.\n\n", result_add);
                    }
                    else
                    {
                        printf("\n%d means that the add is lower or equal than 50.\n\n", result_add);
                    }
                    break;
                case 4:
                    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                    printf("$$$$$$$$$$$ Switch numbers $$$$$$$$$$$\n");
                    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                    printf("Please, introduce the first number: i = ");
                    scanf("%d", &i);
                    printf("Please, introduce the second number: j = ");
                    scanf("%d", &j);
                    switchNumbers(&i,&j);
                    printf("\nNow, i = %d y j = %d.\n\n", i, j);
                    break;
                case 5:
                    do
                    {
                        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                        printf("$$$$$$$$$$$ Playing with arrays $$$$$$$$$$\n");
                        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                        printf("$          MENU OF THE PROGRAM:          $\n");
                        printf("$                                        $\n");
                        printf("$ 1. Entering a number to the array.     $\n");
                        printf("$ 2. Display the array.                  $\n");
                        printf("$ 0. EXIT.                               $\n");
                        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
                        printf("Please, choose an option: ");
                        scanf("%d", &op);
                        if(op<0 || op>2)
                        {
                            printf("\nPlease, introduce a correct option!\n\n");
                        }
                        else
                        {
                            switch(op)
                            {
                                case 1:
                                    enteringValues(vector_num, &counter, &op);
                                    if(op == 2)
                                    {
                                        displayValues(&vector_num, &counter);
                                        printf("\n");
                                    }
                                    break;
                                case 2:
                                    displayValues(vector_num, &counter);
                                    break;
                                default:
                                    printf("\nEND OF PLAYING WITH ARRAYS!!!\n\n");
                            }
                        }
                    }while(op != 0);
                    break;
                default:
                    printf("GOOD BYE!!!\n\n");
            }
        }

    }while(option != 0);
}

//Functions and Procedures...
int factorial(int a)
{
    //To declare variables of the function only.
    int i, store = 1;

    //Main part of the function.
    if(a >= 0)
    {
        for(i=1; i<=a; i++)
        {
            store *= i;
        }
        return store;
    }
    else
    {
        for(i=1; i<=-a; i++)
        {
            store *= i;
        }
        return -store;
    }
}

int addingNumbers(int a, int b)
{
    //Main part of the function.
    if(a + b > FIFTY)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void switchNumbers(int *a, int *b)
{
    //To declare variables of the function only.
    int aux;

    //Main part of the function and doing the Bubble Method.
    aux = *a;
    *a = *b;
    *b = aux;
}

void enteringValues(int array[], int *c, int *option)
{
    //Main part of the function...
    if(*c < MAX_ELEMENTS-1)
    {
        //To store the number in one element....
        printf("\nPlease, introduce an integer number in the position %d: ", *c);
        scanf("%d", &array[*c]);
        *c += 1;
    }
    else
    {
        printf("\n\nOUT OF RANGE!!!! Your array only have %d elements or positions.\n\n", *c);
        *option = 2;
    }
}

void displayValues(int array[], int *c)
{
    //To declare variables of the function only.
    int i;

    //Main part of the function and print the whole array....
    printf("\n\n[");
    for(i=0; i<*c; i++)
    {
        if(i == *c-1)
        {
            printf("%d", array[i]);
        }
        else
        {
            printf("%d,", array[i]);
        }
    }
    printf("]\n\n");
}
