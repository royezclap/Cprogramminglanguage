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
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("not exist.");
    }
    
    if (found == 1)
    {
        printf("it exists.");
    }
}