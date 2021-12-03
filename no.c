#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, x, y, z;
    printf("Nhap a, b:");
    scanf("%f, %f", &a, &b);
    x = pow(a,3) + pow(b,3);
    y = pow((a+b), 3);
    z = a * b * (a+b);
    printf("if a=%f, b=%f then x=%f y=%f z=%f\n", a, b, x, y, z);
    printf("x == 3-y*z: %f", a == 3 - y * z );
    //X khong bang y-3*z
}