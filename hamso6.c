#include <stdio.h>
#include <math.h>
float bmi(float kg, float m)
{
    float BMI;
    BMI = kg / pow(m, 2);
    printf("BMI=%f\n", BMI);
    if (BMI < 18.5)
    {
        printf("Underweight");
    }
    else if (18.5 < BMI && BMI < 24.9)
    {
        printf("Normal weight");
    }
    else if (25 < BMI || BMI < 29.9)
    {
        printf("Overweight");
    }
    else if (BMI >= 30)
    {
        printf("Obesity");
    }
}
int main()
{
    float kg, m;
    bmi(60, 1.7);
}