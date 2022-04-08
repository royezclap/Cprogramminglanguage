#include <stdio.h>

int main()
{
    char ch, samekytu[100];
    FILE *fp, *fp2;
    int words = 0, characters = 0, kytucount = 0;
    int i = 0;

    fp = fopen("C:\\Users\\HieuNguyen\\Desktop\\Cprogramminglanguage\\docfilecount.txt", "r");

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
        {
            words++;
        }
    }

    if (characters > 0)
    {
        words++;
    }

    printf("Words = %d\n", words);
    fclose(fp);

    fp2 = fopen("C:\\Users\\HieuNguyen\\Desktop\\Cprogramminglanguage\\docfilecount.txt", "r");

    if (fgets(samekytu, 100, fp2) != NULL)
    {
        for (int i = 0; i < characters; i++)
        {
            kytucount = 1;
            if (samekytu[i])
            {
                for (int j = i + 1; j < characters; j++)
                {
                    if (samekytu[i] == samekytu[j])
                    {
                        kytucount++;
                        samekytu[j] = '\0';
                    }
                }
                printf(" '%c' = %d \n", samekytu[i], kytucount);
            }
        }
    }

    return 0;
}