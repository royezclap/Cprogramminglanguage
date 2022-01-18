#include <stdio.h>

void num(int a)
{
    if (a == 0)
        printf("khong");
    else if (a == 1)
        printf("mot");
    else if (a == 2)
        printf("hai");
    else if (a == 3)
        printf("ba");
    else if (a == 4)
        printf("bon");
    else if (a == 5)
        printf("nam");
    else if (a == 6)
        printf("sau");
    else if (a == 7)
        printf("bay");
    else if (a == 8)
        printf("tam");
    else if (a == 9)
        printf("chin");
    else
        printf("INvalid");
}

int check(int n)
{
    if (n > 999 || n < -999)
        return -1;
    else
        return 0;
}

void saynum(int n)
{
    int a, b, c;
    if (check(n) == -1)
        printf("Invalid");
    else
    {
        if (n < 0)
        {
            printf("am ");
            n = -n;
        }

        c = n % 10;
        n = n / 10;
        b = n % 10;
        n = n / 10;
        a = n % 10;
        if (a > 0)
        {
            num(a);
            printf(" tram ");
        }
        if (a > 0 && b == 0)
            printf("le ");
        if (b == 1)
        {
            printf("muoi ");
        }
        if (b > 1)
        {
            num(b);
            printf(" muoi ");
        }
        num(c);
        printf("\n");
    }
}
int main(void)
{
    saynum(400);
    saynum(-982);
    saynum(365);
    return 0;
}