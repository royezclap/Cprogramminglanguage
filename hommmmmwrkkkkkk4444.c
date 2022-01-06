#include <stdio.h>

int main()
{
    int a[1000], b[1000], c[1000];
    int n, k = 0, l = 0, j = 0;

    do
    {
        printf("enter n: ");
        scanf("%d", &n);
        if (n <= 10)
        {
            a[k] = n;
            k++;
        }
    } while (n <= 10);

    for (int i = 0; i < k; i++)
    {
        if (a[i] > 0)
            b[l++] = a[i];
        if (a[i] < 0)
            c[j++] = a[i];
        printf("%d \n", a[i]);
    }
    for (int i = 0; i < l; i++)
    {
        printf("%d \n", b[i]);
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d \n", c[i]);
    }
}