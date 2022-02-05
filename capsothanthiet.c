#include <stdio.h>

int capChungThanThiet(int M, int N)
{
    int flag = 0, flag2 = 0;
    int sum = 0;
    for (int i = 1; i <= M; ++i)
    {
        if (M % i == 0)
        {
            sum+=i;
            if(sum == N)
                flag = 1;
        }
    }

    sum = 0;
    
    for (int i = 1; i <= N; ++i)
    {
        if (N % i == 0)
        {
            sum+=i;
            if(sum == M)
                flag2 = 1;
        }  

    }

    if(flag == 1 && flag2 == 1)
    {
        printf("%d va %d la cap so than thiet!", N, M);
    }
    else printf("error");
}

int main()
{
    int M, N;

    do
    {
        printf("enter n: ");
        scanf("%d", &N);
        printf("enter m: ");
        scanf("%d", &M);

    }while (N > 2000 && M < 1);
    capChungThanThiet(M, N);
}