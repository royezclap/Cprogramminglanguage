#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *fp;
    char ch;
    int lower = 0, upper = 0, num = 0;
    fp = fopen("C:\\Users\\HieuNguyen\\Desktop\\data.txt", "r");
    if (fp != NULL)
    {
        do
        {
            ch = fgetc(fp);
            if (ch != EOF)
            {
                printf("%c", ch);
                if (islower(ch))
                {
                    lower++;
                }
                else if (isupper(ch))
                {
                    upper++;
                }
                else if (isdigit(ch))
                {
                    num++;
                }
            }
        } while (ch != EOF);
        fclose(fp);
    }
    else
    {
        puts("cannot open file");
        return 0;
    }

    printf("\n");
    printf("Lowercase = %d, Uppercase = %d, Numbers = %d", lower, upper, num);
    return 0;
}