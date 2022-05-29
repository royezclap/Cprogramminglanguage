#include <stdio.h>

void print_prime(int a, int b, int columns)
{
    int flag, column_counter = 1;
    for (int i = a; i <= b; i++) 
    {
        if (i == 1 || i == 0)
        {
            continue;
        }

        flag = 1;
 
        for (int j = 2; j <= i / 2; ++j) 
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            printf("%5d ", i);
            column_counter++;
        }
        
        if(column_counter > columns)
        {
            printf("\n");
            column_counter = 1;
        }
    }
}

int main()
{
    int a, b, columns;

    printf("Enter a, b: ");
    scanf("%d, %d", &a, &b);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    printf("Table of Primes\n");
    printf("===============\n");
    printf("Lower Limit: %d\n", a);
    printf("Upper Limit: %d\n", b);
    printf("# of columns: %d\n", columns);

    print_prime(a, b, columns);
}