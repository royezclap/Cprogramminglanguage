#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, e, f;
    do{
        printf("Enter Number of student: "); scanf("%i", &a);
    }while(a<=10);
    for(b=0;b<a;b++)
    {
        printf("Enter student score: ");
        scanf("%i", &c);
        d = d + c;
        if(c<5)
        {
            f++;
        }
    }
    e = d / a;
    printf("Diem trung binh = %i\n", e);
    printf("So hoc sinh like mit who fail = %i", f);
    
}