#include <stdio.h>

int main()
{
    char str[200];
    int i, words = 0, characters = 0;

    printf("Enter a line: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ')
            characters++;

        if(str[i] != ' ' && (i == 0 || str[i-1] == ' '))
            words++;
    }

    printf("Number of words = %d\n", words);
    printf("Number of characters = %d", characters);

    return 0;
}
