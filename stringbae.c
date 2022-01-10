#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    printf("enter string1: "); gets(s1);
    char s2[100];
    printf("enter string2: "); gets(s2);
    char s3[100];
    printf("compare s1, s2 = %i \n", strcmp(s1,s2));
    int x = strcmp(s1,s2);
    if(x < 0) printf("s1 < s2");
    else if(x>0) printf("s1 > s2");
    else printf("s1 = s2");  
}