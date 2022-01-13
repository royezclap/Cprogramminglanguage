#include <stdio.h>

int main()
{
    int N, k, sum = 0, x;
    do
    {
        printf("enter N: ");
        scanf("%d ", &N);
    } while (N < 0 || N > 10);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        printf("enter k %d: \n", i);
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    do
    {
        printf("Enter x: ");
        scanf("%d", &x);
    } while (N < 0);
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    if (x > N)
    {
        printf("total = %d", sum);
    }
    if (x <= N)
    {
        float avg = sum / N;
        printf("%f", avg);
    }
}