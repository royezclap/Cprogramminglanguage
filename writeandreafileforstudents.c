#include <stdio.h>

typedef struct THANHVIEN
{
    char name[50];
    int score;
} TV;

int main()
{
    FILE *fp;
    TV hs[50];
    char s[81], n;
    int j;

    printf("Enter amount of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Student's Name: ");
        scanf("%s", hs[i].name);

        printf("Enter %s's Score: ", hs[i].name);
        scanf("%d", &hs[i].score);
    }

    printf("Attempting write to file...\n");

    fp = fopen("C:\\Users\\HieuNguyen\\Desktop\\diem_thi.txt", "w");

    if (fp != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            fprintf(fp, "Student %d name: %s, %s's Score: %d\n", i, hs[i].name, hs[i].name, hs[i].score);
        }
        fclose(fp);
        printf("Success.\n");
    }

    else
    {
        printf("Failed.\n");
    }

    printf("Attempting to read file....\n");

    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%s %s\n", hs[i].name, hs[i].score);
        printf("Student Name: %s, Score: %d", hs[i].name, hs[i].score);
        printf("\n");
    }
}