#include <stdio.h>

int main()
{
    int A[10], B[10], C[10];
    int n;
    int *p;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n > 10);

    printf("Enter Array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d   ", &A[i]);
    }

    p = A;

    for (int i = 0; i < n; i++)
    {
        if(A[i] > 0)
        {
            B[i] = A[i];
            printf("Positive: %d ", *(p+i));
        }
        else
        {
            printf("\n");
            C[i] = A[i];
            printf("Negative: %d ", *(p+i));
        }
        
        
    }
    
}