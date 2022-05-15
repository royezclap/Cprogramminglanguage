#include <stdio.h>
#include <string.h>

char s2[100];

const char* remove_char_in_str(char s[100], int position, int amount_to_del_from_pos)
{
    int max_deleted = position + amount_to_del_from_pos; 
    
    int i = 0, s2_i = 0;


    for(int i = 0; i < position; i++)
    {
        s2[s2_i] = s[i];
        s2_i++;
    }

    for(int i = max_deleted; i < strlen(s); i++)
    {
        s2[s2_i] = s[i];
        s2_i++;
    }
    return s2;
}

int main()
{
    char s[100];
    int position;
    int amount_to_del_from_pos;

    printf("Enter string: ");
    gets(s);

    printf("Enter position to delete from: ");
    scanf("%d", &position);

    printf("Enter amount of characters you want to delete: ");
    scanf("%d", &amount_to_del_from_pos);

    printf("%s", remove_char_in_str(s, position, amount_to_del_from_pos));
}