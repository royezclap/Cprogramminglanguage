#include <stdio.h>

int find_x(int A[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, n, key;
    int c = find_x(A, 9, 5);
    printf("%d", c);
}