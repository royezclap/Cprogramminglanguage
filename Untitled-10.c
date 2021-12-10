#include <stdio.h>
#include <math.h>

int main()
{
    int e=1,n,a;    
    do{
        printf("Enter n:  "); scanf("%i", &n);
    }while (n>8);
    for(a=1;a<=n;a++)
    {    
        e=e*a;
    }
    printf("Giao thua cua %i la %i", n, e );
}