#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z, a, b, c;
    printf("Enter x, y, z: ");
    scanf("%f, %f, %f", &x, &y, &z);
    a = pow((x+y+z), 2);
    b = pow(x,2) + pow(y, 2) + pow(z,2);
    c = x*y + y*z + z*x;
    printf("if x = %f, y = %f and z=%f then a = %f b = %f c = %f\n", x, y, z, a, b, c);
    printf("a-b = %f\n 2*c= %f", a-b, 2*c); //a-b = 2*c
    
}