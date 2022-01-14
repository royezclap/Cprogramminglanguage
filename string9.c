#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char s[15];
    char s1[15];
    char s2[15];
    printf("Enter full name: ");
    gets(s);
    int size_s = strlen(s);
    for (int i = 0; i < size_s; i++)
    {
        s1[i] = toupper(s[i]);
        s2[i] = tolower(s[i]);
    }

    printf("Lowercase string: %s\n", s1);
    printf("Uppercase string: %s", s2);
}