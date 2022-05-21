#include <stdio.h>

void calculate(FILE *fp, char family[10][100], int amount[10], int cost[10])
{
    int i = 0;
    while (fscanf(fp, "%s %d", family[i], &amount[i]) != EOF)
    {
        if(amount[i] <= 100)
        {
            cost[i] =  amount[i] * 1600;       
        }
        else if(amount[i] > 100 && amount[i] <= 300)
        {
            cost[i] = 160000 + (amount[i] - 100) * 2000;
        }
        else if(amount[i] > 300)
        {
            cost[i] = 560000 + (amount[i] - 300) * 3000;
        }     
        i++;
    }
}

void write_to_file(FILE *fp, char family[10][100], int amount[10], int cost[10])
{
    if(fp != NULL)
    {
        for (int i = 0; i < 10; i++)
        {
            fprintf(fp, "%s, %d, %d\n", family[i], amount[i], cost[i]);
        }
    }
}

int main()
{
    char family[10][100];
    int amount[10], cost[10];

    FILE *fp = fopen("C:\\Users\\HieuNguyen\\Desktop\\electric_2205.csv", "r");
    calculate(fp, family, amount, cost);
    fclose(fp);

    FILE *fp2 = fopen("C:\\Users\\HieuNguyen\\Desktop\\output_electric_2205.csv", "w");
    write_to_file(fp2, family, amount, cost);
    fclose(fp2);
}