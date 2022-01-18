#include <stdio.h>

int get_max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    if(b > a)
    {
        return b;
    }
}

int get_min(int a, int b)
{
    if(a > b)
    {
        return b;
    }
    if(b > a)
    {
        return a;
    }
}

int main()
{
    int a, b, max, min;

    max = get_max(5, 10);
    printf("%i\n", max);

    min = get_min(5, 10);
    printf("%i", min);
    
}