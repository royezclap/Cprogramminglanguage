#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);
    
    for(;;)
    {
        if(a != b)
        {
            if(a < b)
            {
                b = b - a;
            }
            else 
            {
                a = a - b;
            }
            
            if(a == b)
            {
                printf("%d", a);
                break;
            }
            else
            {
                continue;
            }
        }

        else
        {
            printf("%d", a);
            break;
        }
    }
}
// Day la chuong trinh chay lam sao cho a va b bang nhau thi thoi. Sau khi chay xong thi in a ra, va luc nay thi a = b.