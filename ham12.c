#include <stdio.h>

int bigsec(int A[], int n)
{
    int max1, max2;

    for(int i=0; i<n; i++)
    {
        if(A[i] > max1)
        {
            max2 = max1;
            max1 = A[i];
        }
        else if(A[i] > max2 && A[i] < max1)
        {
            max2 = A[i];
        }
    }

    return max2;

}

int main()
{
    int n;
    int A[100];
    
    do
    {
        printf("enter N: ");
        scanf("%d", &n);
    } while(n < 0 && n > 10);

    printf("enter array number: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d\n", &A[i]);
    }

    int c = bigsec(A, n);
    printf(" 2nd highest number is %d", c);
}