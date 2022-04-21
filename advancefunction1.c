#include <stdio.h>
#include <string.h>

void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d! = %d", n, fact);
}

void sum(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum from 1 to %d = %d", n, sum);
}

void prime(int n)
{
    if ((n % 2) != 0)
    {
        printf("%d la so nguyen to", n);
    }
    else if ((n == 1) || (n == 0))
    {
        printf("%d khong phai la so nguyen to hay la hop so");
    }
    else
    {
        printf("%d khong phai la so nguyen to", n);
    }
}

void whichbigger(int a, int b)
{
    if (a > b)
    {
        printf("%d > %d", a, b);
    }
    else if (a == b)
    {
        printf("%d = %d", a, b);
    }
    else
    {
        printf("%d < %d", a, b);
    }
}

void biggest(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[0] < a[i])
        {
            a[0] = a[i];
        }
    }
    printf("Biggest = %d", a[0]);
}

void smallest(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[0] > a[i])
        {
            a[0] = a[i];
        }
    }
    printf("Smallest = %d", a[0]);
}

void duongtoam(int year)
{
    char can[10][10]={"Canh","Tan","Nham","Quy","Giap","At","Binh","Dinh","Mau","Ky"};
    char chi[12][10]={"Than","Dau","Tuat","Hoi","Ty'","Suu","Dan","Meo","Thin","Ty.","Ngo","Mui"};

    int thu_tu_can = year%10;
    int thu_tu_chi = year%12;

    printf("nam am lich = %s %s", can[thu_tu_can], chi[thu_tu_chi]);
}

int main()
{
    int a[] = {23, 45, 667, 657, 4576, 2, 23, 4, 45};
    int n = 5;

    factorial(n);
    printf("\n");
    sum(n);
    printf("\n");
    prime(n);
    printf("\n");
    whichbigger(1, 5);
    printf("\n");
    biggest(a, 9);
    printf("\n");
    smallest(a, 9);
    printf("\n");

    duongtoam(2008);
}