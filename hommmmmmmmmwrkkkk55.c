#include <stdio.h>
#include <math.h>

int main()
{
    int A[100000];
    int n, k, a = 0, count = 0;

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

    printf("\nenter k: ");
    scanf("%d", &k);
    for (int i = 0; i < a; i++)
    {
        if (A[i] == k)
        {
            ++count;
        }
    }
        printf("%d appears in the array %d times", k, count);
}