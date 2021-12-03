#include <stdio.h>
#include <math.h>

int main()
{
        float x, y, a, b, c;
        printf("enter x, y:"),
        scanf("%f, %f", &x, &y);
        a = pow((x+y), 2);
        b = pow((x-y), 2);
        c = pow(x, 2)+pow(y, 2);
        printf("if x = %f y=%f then a =%f b=%f c=%f\n", x,y,a,b,c);
        printf("a == a+b=2*c: %d\n", a, a+b, 2*c);
        printf("b == a+b=2*c: %d\n", b, a+b, 2*c);
        printf("c == a+b=2*c: %d\n", c, a+b, 2*c);
        //Ket qua khong dung
}