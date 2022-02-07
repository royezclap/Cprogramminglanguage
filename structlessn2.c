#include <stdio.h>
#include <string.h>

typedef struct date
{
    int day;
    int month;
    int year;
} DATE;

int main()
{
    DATE date, tmr;

    int a = date.day;
    int b = date.month;
    int c = date.year;
    int d = tmr.day;
    int e = tmr.month;
    int f = tmr.year;

    printf("Enter day: ");
    scanf("%d", &a);

    printf("Enter month: ");
    scanf("%d", &b);

    printf("Enter year: ");
    scanf("%d", &c);

    if ((a < 0 || a > 31) || (b < 0 || b > 12))
    {
        printf("There's no tomorrow.");
        return 0;
    }

    printf("Todays date = %d.%d.%d", a, b, c);

    if (a == 31 && (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10))
    {
        d = 1;
        e = b + 1;
        f = c;
    }

    else if (a == 30 && (b == 4 || b == 6 || b == 9 || b == 11))
    {
        d = 1;
        e = b + 1;
        f = c;
    }

    else if (a == 31 && b == 12)
    {
        d = 1;
        e = 1;
        f = c + 1;
    }

    else if (b == 2)
    {
        if (c % 400 == 0 || (c % 4 == 0 && c % 100 != 0))
        {
            if (a == 29)
            {
                d = 1;
                e = b + 1;
                f = c;
            }

            if (a == 28)
            {
                d = a + 1;
                e = b;
                f = c;
            }

            else
            {
                d = a + 1;
                e = b;
                f = c;
            }
        }

        else
        {
            if (a == 28)
            {
                d = 1;
                e = b + 1;
                f = c;
            }
            else
            {
                d = a + 1;
                e = b;
                f = c;
            }
        }
    }

    else
    {
        d = a + 1;
        e = b;
        f = c;
    }

    printf("\n");

    printf("Tomorrow's date = %d.%d.%d", d, e, f);
}
