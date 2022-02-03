#include <stdio.h>
//T(1) = T(2) = T(3) = 1, T(n) = T(n-1) + T(n-2) + T(n-3) với n > 3

int T(int n)
{
    if (n == 1 || n == 2 || n == 3)
    {
        return 1;
    }

    else return T(n - 1) + T(n - 2) + T(n - 3);
}

int main()
{
    int n = 10;
    int c = T(n);
    printf("T(%d) = %d ", n, c);
}