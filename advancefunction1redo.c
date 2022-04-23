#include <stdio.h>
#include <string.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int sum(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int prime(int n)
{
    if(n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= n / 2; ++i) 
    {
        if (n % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}

int whichbigger(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int biggest(int a[], int n)
{
    int max = a[0];
 
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
 
    return max;
}

int smallest(int a[], int n)
{
    int min = a[0];
 
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
 
    return min;
}
char result[10];
const char* duongtoam(int year)
{
    char can[10][10]={"Canh","Tan","Nham","Quy","Giap","At","Binh","Dinh","Mau","Ky"};
    char chi[12][10]={"Than","Dau","Tuat","Hoi","Ty'","Suu","Dan","Meo","Thin","Ty.","Ngo","Mui"};

    int thu_tu_can = year%10;
    int thu_tu_chi = year%12;

    strcat(result, can[thu_tu_can]);
    strcat(result, " ");
    strcat(result, chi[thu_tu_chi]);

    return result;
}

int main()
{
    int a1 = 22, b = 33;
    int a2[] = {23, 45, 667, 657, 4576};
    int n = 5;
    int year = 2008;

    printf("%d", factorial(n));
    printf("\n");
    printf("%d", sum(n));
    printf("\n");
    printf("%d", prime(n));
    printf("\n");
    printf("%d", whichbigger(a1,b));
    printf("\n");
    printf("%d", biggest(a2, n));
    printf("\n");
    printf("%d", smallest(a2, n));
    printf("\n");

    printf("nam am lich: %s", duongtoam(year));
}