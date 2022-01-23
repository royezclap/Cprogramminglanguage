#include <stdio.h>
#include <string.h>

int palindrome(char s[])
{
    int a = 0;
    int b = strlen(s) - 1;
 
    while (b > a)
    {
        if (s[a++] != s[b--])
        {
            return 0;
        }
    }
    return 1;
}
 
int main()
{
    char s[] = "MdbAM";
    int c = palindrome(s);
    printf("%d", c);
}