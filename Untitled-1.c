#include <stdio.h>
#include <math.h>

int main()
{
    int S1, S2, x, n, e;
    do
    {
        printf("enter x, n: "); scanf("%i, %i", &x, &n);

    }while (n<0);
    for(e=0;e<=n;e++)
    {
        S1 = S1 + pow(x, e);
    }
    printf("S1=%i\n", S1);
    for(e=1;e<=n;e++)
    {
        S2=S2+pow(x, e);
        e++;
        S2=S2-pow(x,e);
    }
    S2= S2 + pow(-1,n)*pow(x,n);
    printf("S2=%i", S2);
}
