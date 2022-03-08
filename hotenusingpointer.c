#include <stdio.h>
#include <string.h>

typedef struct Info
{
    char first[1000];
    char last[1000];
} Hoten;
int main()
{
    Hoten name[1000];
    char *ps[1000];
    int j = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter First Name: ");
        scanf("%s", name[i].first);
        
        printf("Enter Last Name: ");
        scanf("%s", name[i].last);
        
        strcat(name[i].first, name[i].last);
        ps[i] = &name[i].first;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Person number %d: %s", i, ps[i]);
        printf("\n");
    }
}

