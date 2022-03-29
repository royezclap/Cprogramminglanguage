#include <stdio.h>

int main()
{
    int n, sum = 0, count = 1;

    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 0; i = n; i++)
    {
        if((count % 2) != 0)
        {
            count++;
            if(count > n)
            {
                printf("sum = %d", sum);
                return 0;
            }
        }

        else if((count % 2) == 0)
        {
            sum+=count;
            count++;
            if(count > n)
            {
                printf("sum = %d", sum);
            }
        }
    }
}