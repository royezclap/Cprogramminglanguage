#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000

int main()
{
    char ch, samekytu[100];
    FILE *fp, *fp2, *fp3;
    char words[MAX][100], word[100];
    int kytu_occurrance, characters, index = 0, d, i, count[MAX];

    fp = fopen("C:\\Users\\HieuNguyen\\Desktop\\Cprogramminglanguage\\docfilecount.txt", "r");
    characters = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;
    }
    fclose(fp);

    fp2 = fopen("C:\\Users\\HieuNguyen\\Desktop\\Cprogramminglanguage\\docfilecount.txt", "r");

    printf("Word count: \n");
    while (fscanf(fp, "%s", word) != EOF)
    {
        strlwr(word);

        int len = strlen(word);
        if (ispunct(word[len - 1]))
        {
            word[len - 1] = '\0';
        }

        d = 1;
        for (i = 0; i < index && d; i++)
        {
            if (strcmp(words[i], word) == 0)
            {
                d = 0;
            }
        }

        if (d)
        {
            strcpy(words[index], word);
            count[index]++;
            index++;
        }
        else
        {
            count[i - 1]++;
        }
    }

    fclose(fp2);

    for (i = 0; i < index; i++)
    {
        printf(" '%s' = %d\n", words[i], count[i]);
    }

    fp3 = fopen("C:\\Users\\HieuNguyen\\Desktop\\Cprogramminglanguage\\docfilecount.txt", "r");

    printf("Character count \n");

    if (fgets(samekytu, 100, fp2) != NULL)
    {
        for (int i = 0; i < characters; i++)
        {
            kytu_occurrance = 1;
            if (samekytu[i])
            {
                for (int j = i + 1; j < characters; j++)
                {
                    if (samekytu[i] == samekytu[j])
                    {
                        kytu_occurrance++;
                        samekytu[j] = '\0';
                    }
                }
                printf(" '%c' = %d \n", samekytu[i], kytu_occurrance);
            }
        }
    }

    fclose(fp3);

    return 0;
}