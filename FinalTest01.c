#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    char gender[50];
} PET;

int main()
{
    FILE *fp, *fp2;

    PET pets[50];

    int n;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 0 && n >= 20);

    for (int i = 0; i < n; i++)
    {
        printf("Enter pet's name: ");
        scanf("%s", pets[i].name);

        printf("Enter %s's age: ", pets[i].name);
        scanf("%d", &pets[i].age);

        printf("Enter gender (Duc or Cai): ");
        scanf("%s", pets[i].gender);
    }

    fp = fopen("c:\\Users\\Hieunguyen\\Desktop\\Cprogramminglanguage\\finaltest_input.txt", "w");

    if (fp != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            fprintf(fp, "%s,%d,%s\n", pets[i].name, pets[i].age, pets[i].gender);
        }
        fclose(fp);
        printf("Success\n");
    }

    else
    {
        printf("Failed.\n");
    }

    PET tmp;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(pets[i].name, pets[j].name) > 0)
            {
                tmp = pets[i];
                pets[i] = pets[j];
                pets[j] = tmp;
            }
        }
    }

    fp2 = fopen("c:\\Users\\Hieunguyen\\Desktop\\Cprogramminglanguage\\finaltest_output.txt", "w");

    if (fp != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            fprintf(fp2, "%s,%d,%s\n", pets[i].name, pets[i].age, pets[i].gender);
        }
        fclose(fp2);
        printf("Success\n");
    }

    else
    {
        printf("Failed.\n");
    }

    for(int i = 0; i < n; i++)
    {
        if(pets[i].age > 5 && strcmp(pets[i].gender, "Cai") == 0)
        {
            printf("%s,%d,%s\n", pets[i].name, pets[i].age, pets[i].gender);
        }
    }
}