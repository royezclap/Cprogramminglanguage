#include <stdio.h>
#include <string.h>

typedef struct
{
    char word[300];
}STORE;

void print_bill(int high, int low)
{
    const int normal_price = 100;
    const int high_price = 150;
    int total = high + low;
    int total_bill_lower = low * normal_price;
    int total_bill_higher = high * high_price;
    int total_bill = total_bill_higher + total_bill_lower;

    char s0[] = "So tu";
    char s1[] = "So tu co kich thuoc binh thuong";
    char s2[] = "So tu co kich thuoc > 8 ky tu";
    char s3[] = "Tong cong";

    printf("%-32s: %2d\n", s0, total);
    printf("%-32s: %2d x %2d = %5d\n", s1, low, normal_price, total_bill_lower);
    printf("%-32s: %2d x %2d = %5d\n", s2, high, high_price, total_bill_higher);
    printf("%-32s:          = %5d\n", s3, total_bill);
}

void bill(FILE *fp, STORE words[300])
{
    int i = 0;
    int character_lower_eight = 0;
    int character_higher_eight = 0;
    int count;
    while (fscanf(fp, "%s", words[i].word) != EOF)
    {
        if(strlen(words[i].word) < 8)
        {
            character_lower_eight++;
        }
        else
        {
            character_higher_eight++;
        }
        i++;
    }

    print_bill(character_higher_eight, character_lower_eight);
}



int main()
{
    STORE word[300];
    FILE *fp = fopen("C:\\Users\\HieuNguyen\\Desktop\\bill.txt", "r");
    bill(fp, word);
    fclose(fp);
}