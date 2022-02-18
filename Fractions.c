#include <stdio.h>

typedef struct PhanSo
{
    int tuso;
    int mauso;
} phanso;

phanso fraction, fraction2;

int GCD;

int sum()
{
    int addtu, addma;
    addtu = (fraction.tuso * fraction2.mauso) + (fraction.mauso * fraction2.tuso); 
    addma = fraction.mauso * fraction2.mauso;             

    if (addtu < addma)
    {
        GCD = addtu;
    }
    else
    {
        GCD = addma;
    }

    while (GCD > 1)
    {
        if (addtu % GCD == 0 && addma % GCD == 0)
            break;
        GCD--;
    }

    int reduced_num = addtu / GCD;
    int reduced_den = addma / GCD;

    printf("Addition: \n");
    printf("%i\n", reduced_num);
    printf("-\n");
    printf("%i", reduced_den);

    printf("\n");
}

int minus()
{
    int mintu, minma;
    mintu = (fraction.tuso * fraction2.mauso) - (fraction.mauso * fraction2.tuso); 
    minma = fraction.mauso * fraction2.mauso;  
    if (mintu < minma)
    {
        GCD = mintu;
    }
    else
    {
        GCD = minma;
    }

    while (GCD > 1)
    {
        if (mintu % GCD == 0 && minma % GCD == 0)
            break;
        GCD--;
    }

    int reduced_num = mintu / GCD;
    int reduced_den = minma / GCD;

    printf("Subtraction: \n");
    printf("%i\n", reduced_num);
    printf("-\n");
    printf("%i", reduced_den);

    printf("\n");
}

int multiply()
{
    int multu = fraction.tuso * fraction2.tuso;
    int mulma = fraction.mauso * fraction2.mauso;

    if (multu < mulma)
    {
        GCD = multu;
    }
    else
    {
        GCD = mulma;
    }

    while (GCD > 1)
    {
        if (multu % GCD == 0 && mulma % GCD == 0)
            break;
        GCD--;
    }

    int reduced_num = multu / GCD;
    int reduced_den = mulma / GCD;

    printf("Multiplication: \n");
    printf("%i\n", reduced_num);
    printf("-\n");
    printf("%i", reduced_den);

    printf("\n");
}

int divide()
{
    int divtu = fraction.tuso * fraction2.mauso;
    int divma = fraction.mauso * fraction2.tuso;

    if (divtu < divma)
    {
        GCD = divtu;
    }
    else
    {
        GCD = divma;
    }

    while (GCD > 1)
    {
        if (divtu % GCD == 0 && divma % GCD == 0)
            break;
        GCD--;
    }

    int reduced_num = divtu / GCD;
    int reduced_den =divma / GCD;

    printf("Division: \n");
    printf("%i\n", reduced_num);
    printf("-\n");
    printf("%i", reduced_den);

    printf("\n");
}

int main()
{

    printf("Enter numerator: ");
    scanf("%i", &fraction.tuso);

    printf("Enter denominator: ");
    scanf("%i", &fraction.mauso);

    if (fraction.mauso == 0)
    {
        printf("Invalid");
        return 0;
    }

    printf("Enter numerator 2: ");
    scanf("%i", &fraction2.tuso);

    printf("Enter denominator 2: ");
    scanf("%i", &fraction2.mauso);

    sum();
    minus();
    multiply();
    divide();
}