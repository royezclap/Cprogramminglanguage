#include <stdio.h>
#include <string.h>

int rev(char word1[], char word2[])
{
    int sizeWord2 = strlen(word2);
    
    for(int i = 0; i < sizeWord2; i++)
    {
        if(word1[i++] == word2[i--])
        {
            return 1;
        }
    }
    return 0;
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