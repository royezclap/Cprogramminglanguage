#include <stdio.h>
#include <math.h>

void check(float a, float b, float c)
{
    if(a + b > c && b + a > c && c + b > a)
    {
        float perimeter = a + b + c;
        float p = perimeter / 2;
        float area = sqrt(p * (p - a) * (p - b) * (p - c));

        printf("Chu vi tam giac = %0.2f\n", perimeter);
        printf("Dien tich tam giac = %0.2f", area);
    }   
    else
    {
        printf("a, b, c are not sides of a triangle\n");
    }
}

int main()
{
    float a, b, c;

    printf("Enter a b c: ");
    scanf("%f, %f, %f", &a, &b, &c);

    check(a, b, c);
}