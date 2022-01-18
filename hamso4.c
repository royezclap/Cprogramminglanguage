#include <stdio.h>

int get_max(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    if (b > a)
    {
        if (b > c)
            return b;
        else
            return c;
    }
    if (c > a)
    {
        if (c > b)
            return c;
        else
            return b;
    }
}

int get_min(int a, int b, int c)
{
    if (a > b)
    {
        if (b > c)
            return c;
        else
            return b;
    }
    if (b > a)
    {
        if (a > c)
            return c;
        else
            return a;
    }
    if (c > b)
    {
        if (b > a)
            return a;
        else
            return b;
    }
}

int main()
{
    int a, b, c, max, min;

    max = get_max(5, 10, 15);
    printf("%i\n", max);

    min = get_min(5, 10, 15);
    printf("%i", min);
}