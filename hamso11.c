#include <stdio.h>

int is_between(float x, float y, float z)
{
    if(x <= y && y <= z)
    {
        return 1;
    }

    else 
        return 0;
}

int main()
{
    float x, y, z;
    float a = is_between(1,2,3);
    printf("%f", a);
    
}