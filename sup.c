#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d,e,x,y;
    printf("Nhập vào điểm toán, lý, hóa, văn và tiếng anh của học sinh:  ");
    scanf("%f,%f,%f,%f,%f", &a,&b,&c,&d,&e );
    x=a+b+c+d+e;
    y=x/5;
    printf("if a=%f b=%f c=%f d=%f e=%f then x=%f y=%f", a,b,c,d,e,x,y);
    
}