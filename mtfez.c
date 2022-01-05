#include <stdio.h>

int main(){
    int n, a=0, i = 0, sum = 0, smallest, biggest;
    int A[1000];
        do{
        printf("Enter n:");
        scanf("%d", &n);
        if(n!=0){
            A[a]=n;
            a++;
        }
    }while(n!=0);

    for(int i = 0; i<a; i++){
        printf("%d ",A[i]);
    }

    for(int i=0; i<a; ++i){
        sum+=A[i];
        if(A[i]<smallest){
            smallest = A[i];
        }
        if(A[i]>biggest){
            biggest = A[i];
        }
    }
    float  avg = sum / a;
    printf("\n%f\n", avg);
    printf("Smallest = %i\n", smallest);
    printf("biggest = %i", biggest);    
}