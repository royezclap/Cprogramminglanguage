#include <stdio.h>

int prime(int n)
{

    int count = 0;
    int sum = 0;
    int j;
    
    for (int i = 2; i <= n; i++)
    {
        int c = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }

        if (c == 2)
        {
            sum+=i;
            printf("Prime Number: %d\n", i);
        }
    }

    return sum;
}

int main()
{
    int n;
    do
    {
        printf("enter n: ");
        scanf("%d", &n);
    } while (n < 0 && n > 200);

    int c = prime(n);
    printf("%d", c);
}