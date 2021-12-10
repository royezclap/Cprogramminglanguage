#include <stdio.h>

int main()
{
    int n, e;
    
    do
    {
        printf("Enter n: "); scanf("%i", &n);        
    } while (n<10||n>100);
    for(e=5;e<n;e=e+5)
    {
       printf("%i\n", e);
    }

}