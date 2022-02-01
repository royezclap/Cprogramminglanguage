#include <stdio.h>

int is_sort(int A[], int n)
{
    int d = 1, i = 0;

    while ((d == 1) && i < n - 1)
    {
        if (A[i] < A[i+1])
            d = 0;
        i++;
    }

    if (d == 1)
    {
        return 1;
    }
    else return 0;
}
int main()
{
    int n, A[15];

    printf("enter number of numbers present in array pls: ");
    scanf("%d", &n);

    printf("Enter array pls: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    
    printf("\n");

    int c = is_sort(A, n);
    printf("%d", c);
}
