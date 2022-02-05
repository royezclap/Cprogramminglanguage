#include <stdio.h>
#include <string.h>

int rev(char word1[], char word2[])
{

    if(strcmp(word1, strrev(word2)))
    {
        return 0;
    }

    return 1;
    
}

int main()
{
    char word1[50];
    char word2[50];

    printf("enter word 1: ");
    gets(word1);
    printf("enter word 2: ");
    gets(word2);

    int c = rev(word1, word2);
    printf("%d", c);
}