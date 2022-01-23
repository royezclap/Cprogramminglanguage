#include <stdio.h>

int get_max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }

}

int get_min(int a, int b, int c)
{
    if (a > c && b > c)
    {
        return c;
    }
    else if (b > a && c > a)
    {
        return a;
    }
    else
    {
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