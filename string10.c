#include <stdio.h>
#include <string.h>

int main()
{
    char pass[16];
    int number, special, capital, small;
    number = special = capital = small = 0;

    printf("enter pass: ");
    gets(pass);
    int a = 0;
    int size_s = strlen(pass);
    
    for (int i = 0; i < size_s; i++)
    {
        if(pass[a]<=6){
        printf("Invalid Password\n");
        break;
        }
        if (pass[i] >= '0' && pass[i] <= '9')
            number = 1;
        if (pass[i] >= 'a' && pass[i] <= 'z')
            small = 1;
        if (pass[i] >= 'A' && pass[i] <= 'Z')
            capital = 1;
        if (pass[i] == '!' || pass[i] == '@' || pass[i] == '#' || pass[i] == '$' || pass[i] == '%' || pass[i] == '*')
            special = 1;
    }
    if (number == 0 || special == 0 || capital == 0 || small == 0)
        printf("\nInvalid Password");
    else
        printf("\nValid Password");
}