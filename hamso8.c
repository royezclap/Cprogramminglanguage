#include <stdio.h>

float find_min(float A[], int n)
{
    int large, small;
    
    small = A[0];

    for(int i = 1; i < n; i++)
    {
        if(A[i]<small)
        {
            small = A[i];
            return small;
        }
    }

}
int main()
{
    float A[] = {5, 5.6, 7, 8, -1}, n;
    float c = find_min(A, 5);
    printf("%.1f ", c);

}