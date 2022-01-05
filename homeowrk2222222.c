#include <stdio.h>

int main()
{
    int A[10];
    int n, a = 0, sumNegative = 0, countNegative = 0, sumPositive=0, x, z = 0;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
        if(n<=10)
        {
            A[a] = n;
            a++;
        }

    } while (n <= 10);

    for(int i = 0; i<a; i++)
    {
        printf("%d ", A[i]);
    }

    for(int i = 0; i<a; i++)
    {
        if(A[i]>0){
            sumPositive+=A[i];
        }
        if(A[i]<0){
            sumNegative+=A[i];
            countNegative++;
        }
        if(A[i]==0){
            z++;
        }
        
    }

    printf("\nenter x: \n");
    scanf("%i", &x);

    for(int i = x; i<a;i++){
        if(A[i]<a){
            printf("A[%d] = %d", x, A[i]);
            break;
        }
    }

    float avg = sumNegative / countNegative;

    printf("\nAverage of negative = %f\n", avg);
    printf("Sum of positive = %i\n", sumPositive);
    printf("Zeros = %d", z);

}