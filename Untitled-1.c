#include <stdio.h>

int main()
{
    float f1 = 123.456, f2;
    int i1, i2 = -150 ;

    i1 = f1; //floating to interger conversion
    printf("%f assigned to an in produces %i \n", f1, i1);
    
    f1 = i2; //interger to floating conversion
    printf("%i assigned to an in produces %f \n", i1, f1);

    f1 = i2 / 100; //interger divided by interger
    printf("%i divided by 100 produces %f \n", i2, f1);
    
    f2 = i2 / 100.0; //interger divided by a float
    printf("%i divided by 100.0 produces %f \n", i2, f2); 

    f2 = (float) i2 / 100; //type cast operator
    printf("(float) %i divided by 100 produces %f \n", i2, f2);

    return 0;
}

//123.456001 assigned to an in produces 123 
//123 assigned to an in produces -150.000000
//-150 divided by 100 produces -1.000000
//-150 divided by 100.0 produces -1.500000
//(float) -150 divided by 100 produces -1.500000

