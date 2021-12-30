#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define pi 3.14

int main()
{
    int n;
    float a, b, c, d, e;
    

    printf("Choose your option...\n");
    printf("1. Area of triangle \n");
    printf("2. Area of rectangle \n");
    printf("3. Area of circle \n");
    printf("0. Exit program! \n");
    printf("Enter your choice: \n");
    scanf("%d", &n);
    while(n<0||n>3){
        printf("Error! Invalid choice");
        break;
    }
    if(n == 1){
        printf("Enter base and height of triangle: ");
        scanf("%f, %f", &a, &b);
        printf("Area of triangle = %f \n", a*b/2 );
    }
    else if(n == 2){
        printf("Enter length and width of rectangle:  ");
        scanf("%f, %f", &c, &d);
        printf("Area of rectangle = %f \n", c*d);
    }
    else if(n == 3){
        printf("Enter radius of circle: ");
        scanf("%f", &e);
        printf("Area of circle = %f \n", pi*pow(e, 2));
    }
    else if(n == 0){
        exit(0);
    }
    main();
    
}