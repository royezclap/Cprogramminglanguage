#include <stdio.h>


void sort(int a[], int n)
{
    int j, tmp;

    for (int i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int a[] = {3, 4, 1, 5, 2, 1, 0, -1, 2}, n;
    sort(a, 9);
}