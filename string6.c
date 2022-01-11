#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10];
    char s2[10];

    printf("enter string 1: "); gets(s1);
    printf("enter string 2: "); gets(s2);


    printf("compare s1, s2: %d\n", strcmp(s1,s2));  //s1 = mit, s2 = bon, gia tri = 1 co nghia la s1 > s2
    printf("compare s2, s1: %d\n", strcmp(s2,s1));  //s1 = mit, s2 = bon, gia tri = -1 co nghia la s1 < s2

    printf("%s\n", strcat(s1,s2));

    printf("%s", strcpy(s1,s2));
}