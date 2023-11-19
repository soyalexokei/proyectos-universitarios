/* Final exam of Fundamentals in Programming in FTN, Novi Sad, Serbia for a Erasmus Student: Alejandro Fernández.
Academic year: 2021/22. */

//Libraries of C Programming...
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//To define ctes....
#define STRING_CHARACTERS 21
#define MAX_TEAMS 32

//To define the struct of the teams in the FIFA World Cup...
typedef struct{
    char team[STRING_CHARACTERS];
    char selector[STRING_CHARACTERS];
    int previous_rank;
    float average_age;
    int legend;
    int injuries;
    float chance_win;
}club;

//Headers of the Functions and Procedures...
void enterTeam();
void displayTeams();
int searchTeam();
void displaySUCHteam();
void bettingOdds();

void main()
{
    //To declare variables...
    int option, contteam = 0, address;

    //To declare the struct...
    club football[MAX_TEAMS];

    //Start the Program....
    printf("\n");
    do{
        printf("\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$$$$$$$$                 FIFA WORLD CUP 2022                 $$$$$$$$$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$             MENU OF THE PROGRAM:                                    $\n");
        printf("$                                                                     $\n");
        printf("$ 1. Enter a team.                                                    $\n");
        printf("$ 2. Display all teams.                                               $\n");
        printf("$ 3. Team search.                                                     $\n");
        printf("$ 4. Betting odds.                                                    $\n");
        printf("$ 5. Sort teams according to betting odds.                            $\n");
        printf("$ 0. Exit of the program.                                             $\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("Which option do you want to choose? : ");
        scanf("%d", &option);
        printf("\n");
        switch(option)
        {
            case 1:
                enterTeam(football, &contteam);
                break;
            case 2:
                displayTeams(football, &contteam);
                break;
            case 3:
                address = searchTeam(football, &contteam);
                if(address == -1)
                {
                    printf("\nDOES NOT EXIT SUCH TEAM, SORRY!\n");
                }
                else
                {
                    displaySUCHteam(football, &address);
                }
                break;
            case 4:
                bettingOdds(football, &contteam);
                break;
            case 5:
                printf("\n\nI HAVE NOT HAD TIME TO DO THIS CASE! SORRY.\n\n");
                break;
            case 0:
                printf("\nEND OF THE PROGRAM!!!");
                printf("\nGOOD BYE!!!\n\n");
                break;
            default:
                printf("\nPlease, introduce a correct option!\n\n");
        }

    }while(option != 0);
}

//Functions and Procedures...
void enterTeam(club football[], int *cont)
{
    //Variables only for the function...
    int i, compare;

    //Main part of the program...
    do
    {
        printf("Please, introduce the name of the team %d: ", *cont+1);
        fflush(stdin);
        fgets(football[*cont].team,STRING_CHARACTERS,stdin);
        for(i=0; i<*cont; i++)
        {
            compare = strcmp(football[*cont].team,football[i].team);
            if(compare == 0)
            {
                printf("\nPlease, introduce another team that it is not used!\n");
                i = *cont;
            }
        }

    }while(compare == 0);
    printf("Please, introduce the selector of the team %d: ", *cont+1);
    fflush(stdin);
    fgets(football[*cont].selector,STRING_CHARACTERS,stdin);
    printf("Please, introduce the Rank of the team %d in the previous world cup (if the team was not in the last World Cup, enter 100): ", *cont+1);
    scanf("%d", &football[*cont].previous_rank);
    printf("Please, introduce the average age of the players in the team %d: ", *cont+1);
    scanf("%f", &football[*cont].average_age);
    printf("Please, introduce the number of legends (extraordinary players) in the team %d: ", *cont+1);
    scanf("%d", &football[*cont].legend);
    printf("Please, introduce the number of hurt players in the team %d: ", *cont+1);
    scanf("%d", &football[*cont].injuries);
    football[*cont].chance_win = 0.0;
    printf("\n\n");
    *cont += 1;
    displayTeams(football, cont);
}

void displayTeams(club football[], int *cont)
{
    //Variables only for the function...
    int i;

    //Main part of the program...
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$       DATA OF ALL TEAMS       $$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
    for(i=0; i<*cont; i++)
    {
        printf("\t\tTeam %d\n", i+1);
        printf("Name of the FC: %s", football[i].team);
        printf("Name of the Selector: %s", football[i].selector);
        if(football[i].previous_rank == 1)
        {
            printf("Previous Rank: %dst\n", football[i].previous_rank);
        }
        else if(football[i].previous_rank == 2)
        {
            printf("Previous Rank: %dnd\n", football[i].previous_rank);
        }
        else if(football[i].previous_rank == 3)
        {
            printf("Previous Rank: %drd\n", football[i].previous_rank);
        }
        else
        {
            printf("Previous Rank: %dth\n", football[i].previous_rank);
        }
        printf("Average Age: %g\n", football[i].average_age);
        printf("Number of Legends: %d\n", football[i].legend);
        printf("Number of injuried players: %d\n", football[i].injuries);
        printf("Betting odds of the team: %g\n", football[i].chance_win);
    }
}

int searchTeam(club football[], int *cont)
{
    //Variables only for the function...
    int i, direction, compare, found = 0;
    char name[STRING_CHARACTERS];

    //Main part of the program...
    printf("What team do you want to search?: ");
    fflush(stdin);
    fgets(name,STRING_CHARACTERS,stdin);
    for(i=0; i<*cont; i++)
    {
        compare = strcmp(name,football[i].team);
        if(compare == 0)
        {
            found = 1;
            direction = i;
        }
    }
    if(found == 0)
    {
        direction = -1;
    }
    return direction;
}

void displaySUCHteam(club football[], int *dir)
{
    //Main part of the program...
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$       DATA OF THE TEAM       $$$$$$$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
    printf("\t\tTeam %d\n", *dir+1);
    printf("Name of the FC: %s", football[*dir].team);
    printf("Name of the Selector: %s", football[*dir].selector);
    printf("Previous Rank: %d\n", football[*dir].previous_rank);
    if(football[*dir].previous_rank == 1)
    {
        printf("Previous Rank: %dst\n", football[*dir].previous_rank);
    }
    else if(football[*dir].previous_rank == 2)
    {
        printf("Previous Rank: %dnd\n", football[*dir].previous_rank);
    }
    else if(football[*dir].previous_rank == 3)
    {
        printf("Previous Rank: %drd\n", football[*dir].previous_rank);
    }
    else
    {
        printf("Previous Rank: %dth\n", football[*dir].previous_rank);
    }
    printf("Average Age: %g\n", football[*dir].average_age);
    printf("Number of Legends: %d\n", football[*dir].legend);
    printf("Number of injuried players: %d\n", football[*dir].injuries);
    printf("Betting odds of the team: %g\n", football[*dir].chance_win);
}

void bettingOdds(club football[], int *cont)
{
    //Variables only for the function...
    int i;

    //Main part of the program...
    for(i=0; i<*cont; i++)
    {
        football[i].chance_win = ((1.5 * ((float)football[i].injuries+1.0)) + (2.0 * (float)football[i].previous_rank))/((float)football[i].legend+1.0);
        if(football[i].chance_win < 1.05)
        {
            football[i].chance_win = 1.05;
        }
    }
    displayTeams(football, cont);
}
