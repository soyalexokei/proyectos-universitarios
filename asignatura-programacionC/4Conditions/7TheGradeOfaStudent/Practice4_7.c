/* 4.7. Program about making a program  that prints out the grade of a student based on his test score:
• 0 - 54 - The student failed
• 55 - 64 - Six
• 65 - 74 - Seven
• 75 - 84 - Eight
• 85 - 94 - Nine
• 95 - 100 - Ten. */
#include <stdio.h>

void main()
{
    //To declare the score of the student in a subject.
    int score;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$ SUBJECT ASSESSMENT $$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("Please, introduce the score, between 0 and 100, of the student in this subject: ");
    scanf("%d", &score);

    //Doing the conditions and print the results.
    if(score >= 0 && score <= 54)
    {
        printf("\n\nTHE FINAL SCORE OF THE STUDENT => FAILED\n\n");
    }
    else if(score >= 55 && score <= 64)
    {
        printf("\n\nTHE FINAL SCORE OF THE STUDENT => 6: Grade C\n\n");
    }
    else if(score >= 65 && score <= 74)
    {
        printf("\n\nTHE FINAL SCORE OF THE STUDENT => 7: Grade B-\n\n");
    }
    else if(score >= 75 && score <= 84)
    {
        printf("\n\nTHE FINAL SCORE OF THE STUDENT => 8: Grade B+\n\n");
    }
    else if(score >= 85 && score <= 94)
    {
        printf("\n\nTHE FINAL SCORE OF THE STUDENT => 9: Grade A-\n\n");
    }
    else if(score >= 95 && score <= 100)
    {
        printf("\n\nTHE FINAL SCORE OF THE STUDENT => 10: Grade A+\n\n");
    }
    else
    {
        printf("\n\nPLEASE, ENTER A VALIDATE NUMBER!!!\n\n");
    }
}
