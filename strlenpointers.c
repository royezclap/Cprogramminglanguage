#include <stdio.h>

int strLen(const char *string)
{
    int i = 0;
    while (*string != '\0') 
    {
        i++;
        string++;
    }
    return i;
}

int main()
{
    char s[10];

    printf("Enter String: ");
    scanf("%s", s);

    printf("Length of string = %d", strLen(s));
}

