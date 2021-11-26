#include <stdio.h>
#include <math.h>

int main()
{
    float x1 = 1.0;
    float y1 = 2.0;
    float x2 = 3.0;
    float y2 = 3.0;
    float x3 = -2.0;
    float y3 = 2.0;
    printf("pow(y1, 6) + x1 * pow(y1, 5) + pow(x1, 2) * pow(y1, 4) + pow(x1, 3) * pow(y1, 3) + pow(x1, 4) * pow(y1, 2) + pow(x1, 5) * y1 + pow(x1, 6) = %f\n", pow(y1, 6) + x1 * pow(y1, 5) + pow(x1, 2) * pow(y1, 4) + pow(x1, 3) * pow(y1, 3) + pow(x1, 4) * pow(y1, 2) + pow(x1, 5) * y1 + pow(x1, 6));
    printf("pow(y2, 6) + x2 * pow(y2, 5) + pow(x2, 2) * pow(y2, 4) + pow(x2, 3) * pow(y2, 3) + pow(x2, 4) * pow(y2, 2) + pow(x2, 5) * y2 + pow(x2, 6) = %f\n", pow(y2, 6) + x2 * pow(y2, 5) + pow(x2, 2) * pow(y2, 4) + pow(x2, 3) * pow(y2, 3) + pow(x2, 4) * pow(y2, 2) + pow(x2, 5) * y2 + pow(x2, 6));
    printf("pow(y3, 6) + x3 * pow(y3, 5) + pow(x3, 2) * pow(y3, 4) + pow(x3, 3) * pow(y3, 3) + pow(x3, 4) * pow(y3, 2) + pow(x3, 5) * y3 + pow(x3, 6) = %f\n", pow(y3, 6) + x3 * pow(y3, 5) + pow(x3, 2) * pow(y3, 4) + pow(x3, 3) * pow(y3, 3) + pow(x3, 4) * pow(y3, 2) + pow(x3, 5) * y3 + pow(x3, 6));
    return 0;

}