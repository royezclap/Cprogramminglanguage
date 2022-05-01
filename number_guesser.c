#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

typedef struct
{
    int max_guess;
    int max_gen;
} PARAM;

void menu()
{
    printf("Welcome Noob!");
    printf("This is a number guessing game\n You are to play alone because... Yes.\n");
}

int diff()
{
    int difficulty;
    printf("Enter Diffculty(1 = Baby; 2 = Normal; 3 = Chad; 4 = Hell; 5 = Mit; 6 = HACKER): \n");
    scanf("%d", &difficulty);
    return difficulty;
}

int compare(int a, int b)
{
    if (a > b)
    {
        printf("Lower like chen\n");
    }
    else if (b > a)
    {
        printf("Higher like deez-\n");
    }
    else
    {
        printf("Wow congrats, u hax ew...");
        return 1;
    }
}

PARAM gen_param_gamemode(int difficulty)
{
    PARAM parameter;
    switch (difficulty)
    {
    case 1:
        parameter.max_guess = 50;
        parameter.max_gen = 50;
        break;

    case 2:
        parameter.max_guess = 40;
        parameter.max_gen = 100;
        break;

    case 3:
        parameter.max_guess = 30;
        parameter.max_gen = 200;
        break;
    case 4:
        parameter.max_guess = 20;
        parameter.max_gen = 400;
        break;
    case 5:
        parameter.max_guess = 10;
        parameter.max_gen = 800;
        break;
    case 6:
        parameter.max_guess = 1;
        parameter.max_gen = 1600;
        break;
    default:
        printf("Invalid, smh");
        break;
    }
    return parameter;
}

void main_game(int difficulty)
{
    PARAM parameter;
    int number;
    int guess;
    int numberofguess = 0;

    parameter = gen_param_gamemode(difficulty);
    number = rand() % parameter.max_gen;

    printf("Guess a number between 1 and %d\n", parameter.max_gen);
    printf("You have %d attempts\n", parameter.max_guess);
    do
    {
        if (numberofguess >= parameter.max_guess)
        {
            printf("\nIdiot, u went to school? ANSWER WAS %d!\n", number);
            break;
        }

        scanf("%d", &guess);
        numberofguess++;

        compare(guess, number);

    } while (guess != number);
}

int main()
{
    srand(time(0));
    int gamemode, difficulty;

    menu();

    difficulty = diff();
    main_game(difficulty);
}