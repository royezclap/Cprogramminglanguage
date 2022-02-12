#include <stdio.h>
#include <string.h>

typedef struct Hoso
{
    char HoTen[40];
    float Diem;
    char Loai[100];
} Hoso;

int main()
{
    Hoso sv1;
    int n;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter student name: ");
            gets(sv1.HoTen);
        }

        printf("Nhap diem sinh vien: ");
        scanf("%f", &sv1.Diem);

        if (sv1.Diem < 0)
        {
            printf("A dissapointment");
        }

        if (sv1.Diem > 10)
        {
            printf("Cheat");
        }

        if (sv1.Diem < 5)
        {
            strcpy(sv1.Loai, "hoc sinh khong dat\n");
            printf("%s", sv1.Loai);
        }

        if (sv1.Diem >= 5 && sv1.Diem < 7)
        {
            strcpy(sv1.Loai, "hoc sinh trung binh\n");
            printf("%s", sv1.Loai);
        }

        if (sv1.Diem >= 7 && sv1.Diem < 9)
        {
            strcpy(sv1.Loai, "hoc sinh kha\n");
            printf("%s", sv1.Loai);
        }

        if (sv1.Diem >= 9 && sv1.Diem <= 10)
        {
            strcpy(sv1.Loai, "hoc sinh gioi\n");
            printf("%s", sv1.Loai);
        }
    }
}