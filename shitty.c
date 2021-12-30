#include <stdio.h>   

int main()  
{  
     
    int i, j, rows, k = 1;  
    printf (" Enter n: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= i; j++)   
        {  
            printf("%d ", k);   
            k += 1;  
        }  
        printf("\n");  
    }    
}  