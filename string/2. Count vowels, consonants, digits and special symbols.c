#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') ||
           (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
               str[i]=='o' || str[i]=='u' ||
               str[i]=='A' || str[i]=='E' || str[i]=='I' ||
               str[i]=='O' || str[i]=='U')
                vowels++;
            else
                consonants++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
            digits++;
        else
            special++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Special symbols = %d", special);

    return 0;
}
