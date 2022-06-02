#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

const char *random_word(char gameword[13], int option)
{
    int random_num = rand() % 5;
    char *clothes[20] = {"shirt", "pants", "underwear", "trunks", "necktie"};
    char *colours[20] = {"red", "maroon", "cyan", "indigo", "purple"};
    char *sports[20] = {"football", "basketball", "fishing", "crosscountry", "gymnastics"};
    char *vehicles[20] = {"truck", "car", "firetruck", "rocketship", "cruiseboat"};
    char *mit[20] = {"gay", "lun", "short", "thicc", "notswag"};
    switch (option)
    {
    case 1:
    {
        strcpy(gameword, clothes[random_num]);
        break;
    }
    case 2:
    {
        strcpy(gameword, colours[random_num]);
        break;
    }
    case 3:
    {
        strcpy(gameword, sports[random_num]);
        break;
    }
    case 4:
    {
        strcpy(gameword, vehicles[random_num]);
        break;
    }
    default:
    {
        strcpy(gameword, mit[random_num]);
        break;
    }
    }

    return gameword;
}

void hanger(int attempts, int correct, char previous_guess[6], char guess)
{
    switch (attempts)
    {
    case 6:
    {
        printf("   +---+\n");
        printf("   |   |\n");
        printf("       |\n");
        printf("       |\n");
        printf("       |\n");
        printf("       |\n");
        printf("=========\n");
        break;
    }
    case 5:
    {
        printf("   +---+\n");
        printf("   |   |\n");
        printf("   O   |\n");
        printf("       |\n");
        printf("       |\n");
        printf("       |\n");
        printf("=========\n");
        if (correct == 0)
        {
            strcpy(&previous_guess[0], &guess);
        }
        break;
    }
    case 4:
    {
        printf("   +---+\n");
        printf("   |   |\n");
        printf("   O   |\n");
        printf("   |   |\n");
        printf("       |\n");
        printf("       |\n");
        printf("=========\n");
        if (correct == 0)
        {
            strcpy(&previous_guess[1], &guess);
        }
        break;
    }
    case 3:
    {
        printf("   +---+\n");
        printf("   |   |\n");
        printf("   O   |\n");
        printf("   |   |\n");
        printf("  /    |\n");
        printf("       |\n");
        printf("=========\n");
        if (correct == 0)
        {
            strcpy(&previous_guess[2], &guess);
        }
        break;
    }
    case 2:
    {
        printf("   +---+\n");
        printf("   |   |\n");
        printf("   O   |\n");
        printf("   |   |\n");
        printf("  / /  |\n");
        printf("       |\n");
        printf("=========\n");
        if (correct == 0)
        {
            strcpy(&previous_guess[3], &guess);
        }
        break;
    }

    case 1:
    {
        printf("   +---+\n");
        printf("   |   |\n");
        printf("   O   |\n");
        printf(" / |   |\n");
        printf("  / /  |\n");
        printf("       |\n");
        printf("=========\n");
        if (correct == 0)
        {
            strcpy(&previous_guess[4], &guess);
        }
        break;
    }

    case 0:
    {
        printf("   +---+\n");
        printf("   |   |\n");
        printf("   O   |\n");
        printf(" / | / |\n");
        printf("  / /  |\n");
        printf("       |\n");
        printf("=========\n");
        printf("GAME OVER!!!!\n");
        attempts = -1;
        break;
    }

    default:
    {
        printf("Error");
        break;
    }
    }
}

void print_stars(char word_found[], char gameword[])
{
    for (int i = 0; i < strlen(gameword); i++)
    {
        strcpy(&word_found[i], "*");
    }
}

int intro(int options)
{
    printf("\n\n\nH  A  N  G  M  A  N\n");
    printf("Start by entering topic (1 = Clothes, 2 = Colours, 3 = Sports, 4 = Vehicles, Any = Mit's Physical Attributes): ");
    scanf("%d", &options);
    printf("\n\n\n\n\n\n\n");

    return options;
}

int check_same(char guess, char word_found[], char previous_guess[])
{
    int flag = 0;
    for (int i = 0; i < strlen(word_found); i++)
    {
        if (guess == word_found[i])
        {
            flag = 1;
        }
    }
    return flag;
}

int main_game(int options)
{
    char guess, confirm, same;
    int i = 0, correct;

    char gameword[13];
    random_word(gameword, options);

    int len = strlen(gameword);
    char word_found[len];
    print_stars(word_found, gameword);

    int attempts = 6;
    char previous_guess[6];
    previous_guess[0] = '\0';

    while (attempts > 0)
    {
        correct = 0, same = 0;
        if (attempts == -1)
        {
            return 0;
        }
        printf("\n\nWord to guess: %s\n", word_found);
        printf("You have %d guess left\n", attempts);
        if (previous_guess[0] == '\0')
        {
            printf("\n");
        }
        else
        {
            printf("Missed Letter: %s", previous_guess);
        }
        printf("\nGuess a letter: ");
        scanf(" %c", &guess);
        tolower(guess);
        same = check_same(guess, word_found, previous_guess);
        if (same == 1)
        {
            printf("\n\nYou already guessed this letter, please try again.\n");
            continue;
        }

        for (int i = 0; i < len; i++)
        {
            if (gameword[i] == guess)
            {
                word_found[i] = guess;
                correct = 1;
            }
        }

        if (strcmp(word_found, gameword) == 0)
        {
            printf("\n\nYes! The secret word is %s! You have won!\n", gameword);
            break;
        }

        if (correct == 0)
        {
            attempts--;
            printf("\n\nSorry, %c is not part of the word\n\n\n", guess);
        }
        else
        {
            printf("\n\nCongratulations! %c is one of the letters!\n\n\n", guess);
        }
        hanger(attempts, correct, previous_guess, guess);
    }
}

int main()
{
    srand(time(NULL));
    int options;
    int confirm;
    while (1)
    {
        options = intro(options);
        main_game(options);
        printf("Do you wish to play again? (1 = yes, any = no) ");
        scanf("%d", &confirm);
        if(confirm == 1)
        {
            continue;
        }
        else
        {
            break;
        }

    }
}