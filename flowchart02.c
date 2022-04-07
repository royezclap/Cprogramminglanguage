#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[1000], X;

    for (int i = 0; i < 1000; i++)
    {
        A[i] = rand() % 100;
    }

    printf("Enter X: ");
    scanf("%d", &X);

    int j;

    for (int i = 0; i < 1000; i++)
    {
        j = i + 1;
        if ((A[i] + A[j]) == X)
        {
            printf("%d, %d \n", A[i], A[j]);
        }
    }
}