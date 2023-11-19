/* Make a program for student evidence (array with max of 50 students), where each
student has the following fields:
    – Index number (max 10 characters).
    – Name (max 10 characters).
    – Family_name (max 10 characters).
    – Average grade.
- Program options:
    1. Enter the data for a new student
    2. Display the data of all entered students
    3. Search for a student with requested index number
    4. Change the grade of the student with requested index number
    5. Erase a student with requested index number
    6. Average grade of all students
    7. Sort the students by index number (ascending, selection sort)
    8. Sort the students by average grade (descending, bubble sort)
    0. End of program */
//Libraries of C Programming...
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//To define ctes....
#define MAX_CHARACTERS 11
#define MAX_STUDENT 50

//To define the struct of the student evidence...
typedef struct{
    char name[MAX_CHARACTERS];
    char surname[MAX_CHARACTERS];
    int grade;
    int id;
}fourESO;

//Headers of the Functions and Procedures...
void newStudentDATA();
void displayStudentDATA();
void searchStudent();
void changeGrade();
void deleteData();
float averageGrade();
void sortIndex();
void sortGrade();

//The main program...
void main()
{
    //To declare variables...
    int option, contStudent = 0;
    float average = 0.0;

    //To declare the struct...
    fourESO student[MAX_STUDENT];

    //Start the Program....
    printf("\n");
    do{
        printf("\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$                  STUDENT EVIDENCE                   $$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$             MENU OF THE PROGRAM:                                    $\n");
        printf("$                                                                     $\n");
        printf("$ 1. Enter the data for a new student.                                $\n");
        printf("$ 2. Display the data of all entered students.                        $\n");
        printf("$ 3. Search for a student with requested index number.                $\n");
        printf("$ 4. Change the grade of the student with requested index number.     $\n");
        printf("$ 5. Erase a student with requested index number.                     $\n");
        printf("$ 6. Average grade of all students.                                   $\n");
        printf("$ 7. Sort the students by index number (ascending, selection sort).   $\n");
        printf("$ 8. Sort the students by average grade (descending, bubble sort).    $\n");
        printf("$ 0. End of program.                                                  $\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("Which option do you want to choose? : ");
        scanf("%d", &option);
        printf("\n");
        if(option<0 || option>8)
        {
            printf("\nPlease, introduce a correct option!\n\n");
        }
        else
        {
            switch(option)
            {
                case 1:
                    newStudentDATA(student, &contStudent);
                    break;
                case 2:
                    displayStudentDATA(student, &contStudent);
                    break;
                case 3:
                    searchStudent(student, &contStudent);
                    break;
                case 4:
                    changeGrade(student, &contStudent);
                    break;
                case 5:
                    deleteData(student, &contStudent);
                    break;
                case 6:
                    average = averageGrade(student, &contStudent);
                    printf("The Average Score of all Students is: %g", average);
                    break;
                case 7:
                    sortIndex(student, &contStudent);
                    break;
                case 8:
                    sortGrade(student, &contStudent);
                    break;
                default:
                    printf("\nEND OF THE PROGRAM!!!");
                    printf("\nGOOD BYE!!!\n\n");
            }
        }

    }while(option != 0);
}

//Functions and Procedures...
void newStudentDATA(fourESO student[], int *cont)
{
    //To declare variables of the function only.
    int score;

    //Main part of the function.
    printf("Introduce the name of the student %d: ", *cont+1);
    fflush(stdin);
    fgets(student[*cont].name,MAX_CHARACTERS,stdin);
    printf("Introduce the surname of the student %d: ", *cont+1);
    fflush(stdin);
    fgets(student[*cont].surname,MAX_CHARACTERS,stdin);
    do{
        printf("Introduce the final score of the student %d: ", *cont+1);
        scanf("%d", &student[*cont].grade);
        score = student[*cont].grade;
        if(score < 0 || score > 10)
        {
            printf("\n\nPlease, introduce a correct score, between 0 and 10!\n\n");
        }

    }while(score < 0 || score > 10);
    printf("Introduce the ID Number of the student %d: ", *cont+1);
    scanf("%d", &student[*cont].id);
    *cont += 1;
    displayStudentDATA(student, cont);
}

void displayStudentDATA(fourESO student[], int *cont)
{
    //To declare variables of the function only.
    int i;

    //Main part of the function.
    printf("");
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$     DATA OF OUR STUDENTS     $$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
    for(i=0; i<*cont; i++)
    {
        printf("\t\tStudent %d\n", i+1);
        printf("Name: %s", student[i].name);
        printf("Surname: %s", student[i].surname);
        printf("ID Number: %d\n", student[i].id);
        printf("Final Score: %d - ", student[i].grade);
        if(student[i].grade >= 5 && student[i].grade <= 6)
        {
            printf("GRADE C.\n\n");
        }
        else if(student[i].grade == 7)
        {
            printf("GRADE B-.\n\n");
        }
        else if(student[i].grade == 8)
        {
            printf("GRADE B+.\n\n");
        }
        else if(student[i].grade == 9)
        {
            printf("GRADE A-.\n\n");
        }
        else if(student[i].grade == 10)
        {
            printf("GRADE A+.\n\n");
        }
        else
        {
            printf("FAILED.\n\n");
        }
    }
}

void searchStudent(fourESO student[], int *cont)
{
    //To declare variables of the function only.
    int ident, i, found = 0;

    //Main part of the function.
    printf("Introduce the ID Number of the student that you want to search: ");
    scanf("%d", &ident);
    for(i=0; i<*cont; i++)
    {
        if(student[i].id == ident)
        {
            found = 1;
            printf("\t\tStudent %d\n", i+1);
            printf("Name: %s", student[i].name);
            printf("Surname: %s", student[i].surname);
            printf("ID Number: %d\n", student[i].id);
            printf("Final Score: %d - ", student[i].grade);
            if(student[i].grade >= 5 && student[i].grade <= 6)
            {
                printf("GRADE C.\n\n");
            }
            else if(student[i].grade == 7)
            {
                printf("GRADE B-.\n\n");
            }
            else if(student[i].grade == 8)
            {
                printf("GRADE B+.\n\n");
            }
            else if(student[i].grade == 9)
            {
                printf("GRADE A-.\n\n");
            }
            else if(student[i].grade == 10)
            {
                printf("GRADE A+.\n\n");
            }
            else
            {
                printf("FAILED.\n\n");
            }
        }
    }
    if(found == 0)
    {
        printf("\n\nNOT FOUND!!!\n\n");
    }
}

void changeGrade(fourESO student[], int *cont)
{
    //To declare variables of the function only.
    int ident, i, found = 0;

    //Main part of the function.
    printf("Introduce the ID Number of the student that you want to change the Final Score: ");
    scanf("%d", &ident);
    for(i=0; i<*cont; i++)
    {
        if(student[i].id == ident)
        {
            found = 1;
            do{
                printf("Introduce the final score of the student %d: ", i+1);
                scanf("%d", &student[i].grade);
                if(student[i].grade < 0 || student[i].grade > 10)
                {
                    printf("\n\nPlease, introduce a correct score, between 0 and 10!\n\n");
                }

            }while(student[i].grade < 0 || student[i].grade > 10);
            displayStudentDATA(student, cont);
        }
    }
    if(found == 0)
    {
        printf("\n\nNOT FOUND!!!\n\n");
    }
}

void deleteData(fourESO student[], int *cont)
{
    //To declare variables of the function only.
    int ident, i, j, found = 0;

    //Main part of the function.
    printf("Introduce the ID Number of the student that you want to erase: ");
    scanf("%d", &ident);
    for(i=0; i<*cont; i++)
    {
        if(student[i].id == ident)
        {
            found = 1;
            if(student[i].id != student[*cont-1].id)
            {
                for(j=i; j<*cont-1; j++)
                {
                    student[j] = student[j+1];
                }
            }
            *cont -= 1;
            displayStudentDATA(student, cont);
        }
    }
    if(found == 0)
    {
        printf("\n\nNOT FOUND!!!\n\n");
    }
}

float averageGrade(fourESO student[], int *cont)
{
    //To declare variables of the function only.
    int i;
    float average, sum = 0.0, aux, resultAvg;

    //Main part of the function.
    for(i=0; i<*cont; i++)
    {
        average = (float)student[i].grade;
        sum += average;
    }
    aux = (float)*cont;
    resultAvg = sum / aux;
    return resultAvg;
}

void sortIndex(fourESO student[], int *cont)
{
    //To declare variables of the function only.
    int i, turns, aux;
    char auxStr[MAX_CHARACTERS];

    //Main part of the function.
    for(turns=0; turns<*cont; turns++)
    {
        for(i=0; i<*cont-1; i++)
        {
            if(student[i].id > student[i+1].id)
            {
                //Bubble method of name.
                strcpy(auxStr, student[i].name);
                strcpy(student[i].name,student[i+1].name);
                strcpy(student[i+1].name, auxStr);
                //Bubble method of surname.
                strcpy(auxStr, student[i].surname);
                strcpy(student[i].surname,student[i+1].surname);
                strcpy(student[i+1].surname, auxStr);
                //Bubble method of grade.
                aux = student[i].grade;
                student[i].grade = student[i+1].grade;
                student[i+1].grade = aux;
                //Bubble method of id.
                aux = student[i].id;
                student[i].id = student[i+1].id;
                student[i+1].id = aux;
            }
        }
    }
    displayStudentDATA(student, cont);
}

void sortGrade(fourESO student[], int *cont)
{
    //To declare variables of the function only.
    int i, turns, aux;
    char auxStr[MAX_CHARACTERS];

    //Main part of the function.
    for(turns=0; turns<*cont; turns++)
    {
        for(i=0; i<*cont-1; i++)
        {
            if(student[i].grade < student[i+1].grade)
            {
                //Bubble method of name.
                strcpy(auxStr, student[i].name);
                strcpy(student[i].name,student[i+1].name);
                strcpy(student[i+1].name, auxStr);
                //Bubble method of surname.
                strcpy(auxStr, student[i].surname);
                strcpy(student[i].surname,student[i+1].surname);
                strcpy(student[i+1].surname, auxStr);
                //Bubble method of grade.
                aux = student[i].grade;
                student[i].grade = student[i+1].grade;
                student[i+1].grade = aux;
                //Bubble method of id.
                aux = student[i].id;
                student[i].id = student[i+1].id;
                student[i+1].id = aux;
            }
        }
    }
    displayStudentDATA(student, cont);
}
