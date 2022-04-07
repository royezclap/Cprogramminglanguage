#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;

    do
    {
        printf("Enter a: ");
        scanf("%d", &a);
    } while (a == 0);

    printf("Enter b, c: ");
    scanf("%d, %d", &b, &c);

    int delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        int x_1 = (-b + sqrt(delta)) / (2 * a);
        int x_2 = (-b - sqrt(delta)) / (2 * a);
        printf("%d", x_1);
        printf("%d", x_2);
    }

    else if (delta == 0)
    {
        int x = -b / (2 * a);
        printf("%d", x);
    }

    else
    {
        printf("Phuong trinh vo nghiem");
    }
}