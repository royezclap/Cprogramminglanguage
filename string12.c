#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    char s1[10];

    printf("enter string: ");
    gets(s);

    printf("enter string1: ");
    gets(s1);

    int size_s1 = strlen(s1);

    for (int i = 0; i < size_s1; i++)
    {
        if (s[i] != s1[i])
        {
            printf("string1 is not the start of string");
            break;
        }

        else
        {
            printf("string1 is the start of string");
            break;
        }
    }
}