#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[10];
    int low = 0, big = 0, digit = 0;
    printf("Enter string: ");
    gets(s);
    int s_size = strlen(s);
    for (int i = 0; i < s_size; i++)
    {
        printf("%c", s[i]);
        if (isupper(s[i]) != 0)
            big++;
        if (islower(s[i]) != 0)
            low++;
        if (isdigit(s[i]) != 0)
            digit++;

    }
    printf("\nUppercase = %d, Lowercase = %d, digit = %d", big, low, digit);
}