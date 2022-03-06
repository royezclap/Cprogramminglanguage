#include "stdio.h"

int cucdai(int A[], int n)
{
    int sum = 0;
    if (n == 1)
    {
        sum += A[0];
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] > A[i - 1] && A[i] > A[i + 1])
        {
            sum += A[i];
        }
        else if(i == 0 && A[0] > A[1])
        {
            sum+=A[0];
        }
        else if(i == n - 1 && A[n-1]> A[n-2])
        {
            sum+=A[n-1];
        }
    }

    return sum;
}

int main()
{
    int A[100];
    int n;
    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n > 10 || n < 0);

    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    printf("\nTong cac phan tu cuc dai: %d", cucdai(A, n));
}