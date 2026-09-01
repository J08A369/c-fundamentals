#include <stdio.h>

int main()
{
    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;

        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;

        else if(str[i] >= '0' && str[i] <= '9')
            str[i] = '#';

        else
            str[i] = '%';
    }

    printf("New string: %s", str);

    return 0;
}
