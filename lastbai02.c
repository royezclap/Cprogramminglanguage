#include <stdio.h>

float calculate_S(int n)
{
    float S = 1, j = 2;
    for (int i = 1; i < n; i++)
    {
        S += i / j;
        j++;
    }
    return S;
}

int is_prime(int n)
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

int main()
{
    int n;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n <= 5);

    
    printf("%0.2f\n", calculate_S(n));

    printf("Enter n again pls: ");
    scanf("%d", &n);

    printf("%d", is_prime(n));
    
}