#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int guess(int n)
{
    int number, guess, numberofguess = 0;

    number = rand() % n;

    printf("Guess a number between 1 and %d\n", n);
    do
    {

        if (numberofguess > 10)
        {
            printf("\nIdiot, u went to school?\n");
            break;
        }

        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower like chen\n");
            numberofguess++;
            continue;
        }
        else if (number > guess)
        {
            printf("Higher like deez-\n");
            numberofguess++;
            continue;
        }
        else
        {
            printf("Wow congrats, u guessed in %d attempts, ew hax...", numberofguess);
        }

    } while (guess != number);
}

int main()
{
    int n = 100;

    guess(n);

    return 0;
}