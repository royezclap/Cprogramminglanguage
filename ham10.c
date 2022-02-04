#include <stdio.h>

int perfect(int n)
{
    int sum, tong = 0;
    int flag = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = 0;

        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }

        if (sum == i)
        {
            printf("%d, ", i);
            tong += i;
            
        }
    }

    printf("%d", tong);
}

int main()
{
    int n;
    do
    {
        printf("enter n: ");
        scanf("%d", &n);
    } while (n < 0 && n > 1000);

    perfect(n);
}