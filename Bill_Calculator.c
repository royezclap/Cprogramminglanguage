#include <stdio.h>

// int calculate(int Quantity, int Price)
// {
//     int product_cost = Quantity * Price;
//     return product_cost;
// }

// void read_in_file(FILE *fp, char Product[100][100], int Quantity[100], int Price[100], int total, int subtotal[100])
// {
//     int i = 0;
//     while (fscanf(fp, "%s %d %d", Product[i], &Quantity[i], &Price[i]) != EOF)
//     {
//         subtotal[i] = calculate(Quantity[i], Price[i]);
//         total += calculate(Quantity[i], Price[i]);
//         i++;
//     }
//     fclose(fp);
// }

// void write_to_file(FILE *fp, char Products[100][100], int Quantity[10], int Price[10], int subtotal[100], int total)                               
// {                                                           
//     if(fp != NULL)                                                           
//     {                                                           
//         for (int i = 0; i < 100; i++)                                                         
//         {                                                           
                                          
//         }            
//         fprintf(fp, "%d\n", total);                                              
//     }             
//     fclose(fp);                                              
// }   

int main()
{
    char Product[100];
    int Quantity, Price, i = 0, total = 0, subtotal;
    FILE *fp = fopen("C:\\Users\\HieuNguyen\\Desktop\\order.txt", "r"), *fp2 = fopen("C:\\Users\\HieuNguyen\\Desktop\\output_order.txt", "w");
    // read_in_file(fp, Product, Quantity, Price, total, subtotal);
    // write_to_file(fp2, Product, Quantity, Price, subtotal, total);
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