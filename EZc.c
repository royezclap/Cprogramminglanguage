#include <stdio.h>
#include <math.h>


int main()
{
    float x, y, a, b, c, d, f, g;
    printf("Enter x, y: ");
    scanf("%f, %f", &x, &y);
    a = pow((x+y), 2);
    b = pow((x-y), 2);
    c = x * y;
    d = (a-b) / c;
    printf("if x=%f y=%f then a=%f b=%f c=%f d=%f\n", x, y, a, b, c, d);
    f = a - b;
    g = 4*(x*y);
    printf("f == g : %d ", f == g); //Dung
    
}