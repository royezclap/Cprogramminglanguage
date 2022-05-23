#include <stdio.h>

int main()
{
    char Product[100];
    int Quantity, Price, i = 0, total = 0, subtotal;
    FILE *fp = fopen("C:\\Users\\HieuNguyen\\Desktop\\order.txt", "r"), *fp2 = fopen("C:\\Users\\HieuNguyen\\Desktop\\output_order.txt", "w");
    char s[] = "Name Of Product:";
    char s2[] = "Quantities:";
    char s3[] = "Price:";
    char s4[] = "Subtotal:"; 
    char s5[] = "Total:";
    fprintf(fp2, "%-32s %-10s %-10s %-10s\n", s, s2, s3, s4);
    while (fscanf(fp, "%s %d %d", Product, &Quantity, &Price) != EOF)
    {
        subtotal = Quantity * Price;
        total += subtotal;
        fprintf(fp2, "%-32s %-10d %-10d  %-10d\n", Product, Quantity, Price, subtotal);
    }
    fprintf(fp2, "%-32s                        %-10d", s5, total);
}