#include <stdio.h>

int main()
{
    int a, b;
    int *p1, *p2;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;
    
    int sum = *p1 + *p2;

    printf("Sum = %d", sum);
}