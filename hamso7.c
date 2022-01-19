#include <stdio.h>

int ucln(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a = a - b;
        }
        if(b>a)
        {
            b = b - a;
        }
    }
    return a;
}

int bcnn(int a, int b)
{
    return a * b / ucln(a, b);
}

int main()
{
    int a, b;
    int c = ucln(4, 5);
    int d = bcnn(4, 5);
    printf("Uoc chung lon nhat la: %d, Boi chung no nhat la: %d", c, d);
}