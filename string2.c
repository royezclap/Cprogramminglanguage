#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    int c, s_size;

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
            break;
        }
        else
        {
            printf("not exist.");
            break;
        }
    }
}