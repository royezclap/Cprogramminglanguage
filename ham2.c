#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checklower(char s[], int size_s)
{
    int low = 0;

    size_s = strlen(s);

    for(int i = 0; i < size_s; i++)
    {
        if(islower(s[i]) != 0)
            low++;
            
    }
    if(low < size_s)
        return 0;
    else
        return 1;
}

int main()
{
    char s[50];
    int size_s;

    printf("Enter string: ");
    gets(s);

    int x = checklower(s, size_s);
    printf("%d", x);
    
}