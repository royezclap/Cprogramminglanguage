#include <stdio.h>

typedef struct Hoso
{
    char HoTen[40];
    float Diem;
}Hoso;

int main()
{
    Hoso sv1;

    printf("Nhap ten sinh vien: ");
    gets(sv1.HoTen);

    printf("%s", sv1.HoTen);

    printf("\n");

    do
    {
    printf("Nhap diem sinh vien: ");
    scanf("%f", &sv1.Diem);
    }while (sv1.Diem > 10 || sv1.Diem < 0);

    printf("%f", sv1.Diem);

    printf("\n");

    if(sv1.Diem < 5)
    {
        printf("Hoc Sinh khong dat");
    }

    if(sv1.Diem >= 5 && sv1.Diem < 7)
    {
        printf("Hoc Sinh trung binh");
    }

    if(sv1.Diem >=7 && sv1.Diem < 9)
    {
        printf("Hoc Sinh kha");
    }

    if(sv1.Diem >=9 && sv1.Diem <= 10)
    {
        printf("Hoc Sinh gioi");
    }


}