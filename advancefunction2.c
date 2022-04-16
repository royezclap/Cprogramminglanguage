#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int win;
    int tie;
    int lose;
    int score;
} TEAM_INFO;

void calculate_score(TEAM_INFO team[50], int n)
{
    int i = 0;
    while (i < n)
    {
        team[i].score = (team[i].win * 3) + (team[i].tie);
        i++;
    }
}

void check_highest_score(TEAM_INFO team[50], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (team[0].score < team[i].score)
        {
            team[0].score = team[i].score;
            strcpy(team[0].name, team[i].name);
        }
    }
}

int main()
{
    TEAM_INFO team[50];
    int n;

    printf("Enter amount of teams participating: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter team's name: ");
        scanf("%s", team[i].name);

        printf("Enter %s's wins: ", team[i].name);
        scanf("%d", &team[i].win);

        printf("Enter %s's ties: ", team[i].name);
        scanf("%d", &team[i].tie);

        printf("Enter %s's losses: ", team[i].name);
        scanf("%d", &team[i].lose);

        printf("\n");
    }

    calculate_score(team, n);
    check_highest_score(team, n);

    printf("\n");

    printf("%s has the highest score of %d", team[0].name, team[0].score);
}