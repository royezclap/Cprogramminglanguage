#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char s[10];
    char a;
    char b = '$';
    printf("enter string: ");
    gets(s);
    int size_s = strlen(s);
    printf("enter first character in the string: ");
    scanf("%c", &a);
    for (int i = 0; i < size_s; i++)
    {

        if (s[i] == a)
        {
            s[i] = b;
        }
        else
            continue;
    }
    printf("\nNew string:");
    puts(s);
}