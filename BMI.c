#include <stdio.h>
#include <math.h>
int main() {
    float BMI, kg, m;
    printf("Enter weight and height: ");
    scanf("%f,%f", &kg, &m);
    BMI = kg/pow(m, 2);
    printf("BMI=%f\n", BMI);
    if(BMI<18.5){
        printf("Underweight");
    }else if(18.5<BMI&&BMI<24.9){
        printf("Normal weight");
    }else if(25<BMI||BMI<29.9){
        printf("Overweight");
    }else if(BMI>=30){
        printf("Obesity");
    }
}