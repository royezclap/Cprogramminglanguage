#include <stdio.h>
#include <math.h>

int main()
{
    int A[10];
    int n, j, tmp, a = 0, count;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
        if (n <= 10)
        {
            A[a] = n;
            a++;
        }
    } while (n <= 10);

    for (int i = 0; i < a; i++)
    {
        printf("%i ", A[i]);
    }

    printf("\n");

    for (int i = 0; i < a; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            if (A[i] > A[j])
            {
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }

    for (int i = 0; i < a; i++)
        printf("%d ", A[i]);
    printf("\n");

        for (int i = 0; i < a; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            if (A[i] < A[j])
            {
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }

    for (int i = 0; i < a; i++)
        printf("%d ", A[i]);
    printf("\n");
    for (int i = 0; i < a; i++)
    {
        for (j = i + 1; j < a; j++)
        {
            if (abs(A[i]) < abs(A[j]))
            {
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }
    for (int i = 0; i < a; i++)
        printf("%d ", A[i]);
}