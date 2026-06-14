#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Capital Letter\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Small Letter\n");
    else if (ch >= '0' && ch <= '9')
        printf("Digit\n");
    else
        printf("Special Symbol\n");

    return 0;
}
