#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    char c;
    int s_size, found = 0;

    printf("Enter string: ");
    gets(s);
    s_size = strlen(s);
    printf("Enter c: ");
    scanf("%c", &c);
    for (int i = 0; i < s_size; i++)
    {
        if (c == s[i])
        {
            printf("it exists.");
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("not exist.");
    }
}