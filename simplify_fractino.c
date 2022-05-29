#include <stdio.h>
#include <math.h>

void input(int *num, int *den)
{
    printf("Enter numerator: ");
    scanf("%d", num);

    do
    {
        printf("Enter denominator: ");
        scanf("%d", den);
    }while(*den == 0);

    printf("\n\n");
}

int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if(a == 0)
    {
        return b;
    }
	while(a != b)
    {
        if(a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
 
	return a;
}

void simplify(int *num, int *den)
{
    int temp = gcd(*num, *den);

    if(*den < 0)
    {
        temp *= -1;
    }

    *num /= temp;
    *den /= temp;
}

void display(int num, int den)
{
    printf("%d/%d\n", num, den);
    printf("=\n");
    simplify(&num, &den);
    printf("%d/%d\n", num, den);
}

int main()
{
    int num, den;
    char confirmation;
    while(1)
    {
        printf("1. Input fraction\n\n");
        input(&num, &den);
        printf("2. Simplify fraction\n\n");
        display(num, den);

        printf("Another run (y/n)? ");
        scanf("%c", &confirmation);
        scanf("%c", &confirmation);

        if(confirmation == 'y')
        {
            continue;
        }
        else if(confirmation == 'n')
        {
            break;
        }
        else
        {
            printf("InvALID RESPONSE gay BITSh");
        }
    }
}