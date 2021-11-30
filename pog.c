#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z, a, b, c, F;
    printf("Enter x, y, z:  ");
    scanf("%f, %f, %f", &x, &y, &z);
    a = x + y + z;
    b = pow(x, 2) + pow(y, 2) + 1;
    c = x - z * y;
    printf("if x=%f y=%f z=%f then a=%f b=%f c=%f\n", x, y, z, a, b, c );
    F = a / b - c;
    printf("Value of F = %f", F);

}