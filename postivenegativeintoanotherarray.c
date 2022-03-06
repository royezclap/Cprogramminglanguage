#include <stdio.h>

int main()
{
    int A[10], B[10], C[10];
    int n;
    int *p;
    int j = 0, z = 0;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n > 10);

    printf("Enter Array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    p = A;

    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            B[j] = *(A + i);
            j++;
        }
        else
        {
            C[z] = *(A + i);
            z++;
        }
    }

    for(int i = 0; i < j; i++)
    {
        printf("%d ", *(B + i));
    }
    printf("\n");
    for(int i = 0; i < z; i++)
    {
        printf("%d ", *(C + i));
    }
}