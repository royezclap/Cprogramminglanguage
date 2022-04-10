#include <stdio.h>
#include <stdlib.h>\

int find_sum_equation(int A[], int n, int X)
{
    for (int i = 0; i < n - 1; i++)
    {
        if ((A[i] + A[i + 1]) == X)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int A[1000], X, n;

    for (int i = 0; i < 1000; i++)
    {
        A[i] = rand() % 100;
    }

    int c = find_sum_equation(A, 1000, 1);
    printf("%d", c);
}