/* 6.1. Program about making a program  for handling an integer array with a maximum of 50 elements with the
following options:
1. Add a new element to the array
 - Enter the new element
 - Increment the counter of elements in the array
2. Display all elements of the array
3. Display nth element of the array
 - The user enters the index for the element to be displayed
4. Find an element and display its index
 - The user enters the value to be found
 - If the element with that value was found, display its index
 - If there is no such element in the array, display -1
5. Modify nth element of the array
 - The user enters the index of the element to be modified
 - The user enters the new value for the element on the specified index
6. Erase nth element of the array
 - The user enters the index of the element to be deleted
 - All elements after the nth are moved to the previous index, and the last
element is overwritten with 0 and the counter of the elements is
decremented
7. Display the value and index of the minimal element in the array
 - Find the minimal element ad display its value
 - Display the index of the minimal element
8. Sum of all array elements
 - Calculate and display the sum of values of all elements of the array
0. Exit program. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//To define ctes...
#define MAX_STORAGE 50

void main()
{
    //To declare variables....
    int i, option, counter = 0, num, index, new_value, minimum, sum = 0;

    //To declare the array....
    int store[MAX_STORAGE];

    //To start the program.....
    do
    {
        printf("\n\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        printf("\n");
        printf("$$$$$$$$$ TO HANDLE ARRAYS $$$$$$$$$");
        printf("\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        printf("\n");
        printf("$                                  $");
        printf("\n");
        printf("$ MENU OF CHOOSING AMONG 9 OPTIONS $");
        printf("\n");
        printf("$                                  $");
        printf("\n");
        printf("$ 1. Enter a number.               $");
        printf("\n");
        printf("$ 2. Print elements in a vector.   $");
        printf("\n");
        printf("$ 3. Display number of elements.   $");
        printf("\n");
        printf("$ 4. Find a number.                $");
        printf("\n");
        printf("$ 5. Modify an element.            $");
        printf("\n");
        printf("$ 6. Delete an element.            $");
        printf("\n");
        printf("$ 7. MIN element of the array.     $");
        printf("\n");
        printf("$ 8. Add up all elements.          $");
        printf("\n");
        printf("$ 0. Exit from the program.        $");
        printf("\n");
        printf("$                                  $");
        printf("\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        printf("\n");
        printf("Please, introduce one of the nine options: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
                if(counter <= MAX_STORAGE-1)
                {
                    //To store the number in one element....
                    printf("\nPlease, introduce an integer number in the position %d: ", counter);
                    scanf("%d", &store[counter]);
                    printf("\n");
                    counter += 1;
                }
                else
                {
                    printf("\n\nOUT OF RANGE!!!! Your array only have %d elements or positions.\n\n", counter);
                }
                break;
            case 2:
                //To print the whole array....
                printf("\n\n[");
                for(i=0; i<counter; i++)
                {
                    if(i == counter-1)
                    {
                        printf("%d", store[i]);
                    }
                    else
                    {
                        printf("%d,", store[i]);
                    }
                }
                printf("]\n\n");
                break;
            case 3:
                printf("\n\nThe array has %d elements.\n\n", counter);
                break;
            case 4:
                printf("\n\nWhat number do you want to find? : ");
                scanf("%d", &num);
                for(i=0; i<counter; i++)
                {
                    if(num == store[i])
                    {
                        printf("\nIts index is: position %d.", i);
                    }
                    else
                    {
                        printf("\n-1 => Does not exit in the position %d.", i);
                    }
                }
                printf("\n\n");
                break;
            case 5:
                do
                {
                    printf("\n\nWhat position of the array that do you want to modify? : ");
                    scanf("%d", &index);
                    if(index<=0 || index>counter)
                    {
                        printf("\n\nOUT OF RANGE!!!\n\n");
                    }
                    else
                    {
                        printf("Which do you want to be the new value in the position %d? : ", index);
                        scanf("%d", &new_value);
                        store[index] = new_value;
                    }
                }while(index<0 || index>=counter);
                break;
            case 6:
                do
                {
                    printf("\n\nWhat position of the array that do you want to delete? : ");
                    scanf("%d", &index);
                    if(index<0 || index>=counter)
                    {
                        printf("\n\nOUT OF RANGE!!!\n\n");
                    }
                    else
                    {
                        for(i=index; i<counter; i++)
                        {
                            if(i == counter-1)
                            {
                                store[counter-1] = 0;
                            }
                            else
                            {
                                store[i] = store[i+1];
                            }
                        }
                    }
                }while(index<0 || index>=counter);
                break;
            case 7:
                if(store[0] <= store[1])
                {
                    minimum = store[0];
                }
                else
                {
                    minimum = store[1];
                }
                for(i=0; i<counter; i++)
                {
                    if(minimum > store[i])
                    {
                        minimum = store[i];
                    }
                }
                printf("\n\nThe minimal number of the array is %d.\n\n", minimum);
                break;
            case 8:
                for(i=0; i<counter; i++)
                {
                    sum += store[i];
                }
                printf("\n\nThe addition of all elements of the array is %d.\n\n", sum);
                break;
            case 0:
                printf("\n\nGOOD BYE!!!!\n\n");
                break;
            default:
                printf("\n\nPLEASE INTRODUCE A CORRECT OPTION.....\n\n");
        }
    }while(option != 0);
}
