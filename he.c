#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0;
    printf("enter n: ");
    scanf("%i", &n);
    for(int a=1;a<=n;a++)
    {
        sum = sum + a;     
    }
    printf("%i\n", sum);
    
}