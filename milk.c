#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("enter a,b,c:");
    scanf("%i,%i,%i", &a,&b,&c);
    if(a+b>c||a+c>b||b+c>a)
    {
       if (a == b||b==c||a==c)
    {
        printf("Tam giac can");
    }
    else if(a==b==c)
     {
        printf("Tam giac deu");
     }
     else if(a*a+b*b==c*c||b*b+c*c==a*a||b*b==a*a+c*c)
    {
        printf("Tam giac vuong");
    }
        else
    {
        printf("Tam giac vo huong");
    }
    }
    else{
        printf("not triangle");
    }

}