#include <stdio.h>

int uocChung(int M, int N)
{
    int count = 0, i, sum = 0;

    for (i = 1; i <= M; i++)
    {
        if (M % i == 0 && N % i == 0)
        {
            sum += i;
            count++;
        }
        
    }
    printf("sum = %d ", sum);
    printf("Count = %d ", count);
}

int main()
{
    int M, N, sum, count;

    printf("Enter M: ");
    scanf("%d", &M);

    printf("Enter N: ");
    scanf("%d", &N);

    uocChung(M, N);
}