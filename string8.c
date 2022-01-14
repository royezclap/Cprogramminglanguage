#include <stdio.h>
#include <math.h>

int main()
{
    int n, a = 0, j, tmp;
    int A[10];

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
        if (n != 0)
            A[a] = n;
        a++;
        if (a == 7)
        {
            break;
        }
    } while (n != 0);

    for (int i = 0; i < a; i++)
    {
        printf("%d ", A[i]);
    }
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