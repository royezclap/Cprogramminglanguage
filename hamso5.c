#include <stdio.h>

int is_prime(int n)
{
    int flag = 0;
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 0 || n == 1)
    {
        printf("n is neither composite or prime");
    }
    else
    {
        if (flag == 0)
        {
            return 1;
        }
        else
            return 0;
    }
}

int main()
{
    int n;
    is_prime(5); 
}