#include <stdio.h>
#include <string.h>

char kytu(char word1[], char word2[])
{
    char word3[50];
    int flag = 0;
    int i = 0;
    int size_word1 = strlen(word1);
    for(i = 0; i < size_word1; i++)
    { 
        if(strchr(word2, word1[i]))
        {
            word3[flag++] = word1[i];
        }
    }
    for(i = 0; i < flag; i++)
    {
        printf("%c ", word3[i]);
    }


}

int main()
{
    char word1[] = "ezwrt";
    char word2[] = "ezrt";

    kytu(word1, word2);
}