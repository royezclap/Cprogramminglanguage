#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Age: ");
    scanf("%i", &n);
    if(n<6){
        printf("Tuoi thieu nhi");
    }
    else if(6<n&&n<12){
        printf("Tuoi thieu nien");
    }
    else if(12<n&&n<19){
        printf("Tuoi thanh thieu nien");
    }
    else if(19<n&&n<35){
        printf("Tuoi thanh nien");
    }
    else if(35<n&&n<60){
        printf("Tuoi trung nien");
    }
    else if(60<n){
        printf("Tuoi cao nien");
    }
    
}