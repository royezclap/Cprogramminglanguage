#include <stdio.h>

int prime(int A[], int n)
{
    int j, b, count = 0;

    for (int i = 0; i < n; i++)
    {
        j = 2;
        b = 1;
        while (j < A[i])
        {
            if (A[i] % j == 0)
            {
                b = 0;
                break;
            }
            j++;
        }
        if (b == 1)
        {
            if(A[i] != 1 && A[i] != 0)
                count++;
        }
    }
    return count;
}
int main()
{
    int A[20];
    int n;

    do
    {
        printf("enter n: ");
        scanf("%d", &n);
    } while (n < 0 || n > 10);

    for (int i = 0; i < n; i++)
    {
        printf("Enter array number %d: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    int c = prime(A, n);
    printf("There are %d prime numbers", c);
}