#include <stdio.h>

int main()
{
    int a[15];
    int n;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n > 10);

    printf("Enter array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }

    printf("\n");
    
    for(int i = 0; i < n; i++)
    {
        printf("%p ", a + i);
    }
    
}