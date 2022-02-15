#include <stdio.h>

typedef struct SinhVien
{
    int maso;
    char name[50];
    char class[50];
    int average_score;
} sinhvien;

int main()
{
    sinhvien sv[50];

    int n;
    int k;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter student's Name: ");
        scanf("%s", sv[i].name);

        printf("Enter Class Name: ");
        scanf("%s", sv[i].class);

        printf("Enter Student ID number: ");
        scanf("%i", &sv[i].maso);

        printf("Enter Average Score: ");
        scanf("%i", &sv[i].average_score);

        printf("\n");
        
    }
    
    printf("Enter student ID number: ");
    scanf("%i", &k);

    for (int i = 0; i < n; i++)
    {
        if(k == sv[i].maso)
        {
            printf("Student's name: %s\n", sv[i].name);
            printf("Student's class: %s\n", sv[i].class);
            printf("Students's average score: %i\n", sv[i].average_score);
            break;
        }
    }

    printf("\n");
    printf("Nhung nguoi co diem trung binh lon hon 5 la...\n");


    for (int i = 0; i < n; i++)
    {
        if(sv[i].average_score > 5)
        {
            printf("%s\n", sv[i].name);
        }
    }
}