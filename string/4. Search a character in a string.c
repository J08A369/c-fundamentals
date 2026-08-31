#include <stdio.h>

int main()
{
    char str[200], ch;
    int i, found = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to search: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Character found at position %d", i + 1);
    else
        printf("Character not found");

    return 0;
}
