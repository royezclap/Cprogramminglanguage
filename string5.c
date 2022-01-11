#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    printf("enter string: "); gets(s);
    printf("Reversed string: %s", strrev(s));
}