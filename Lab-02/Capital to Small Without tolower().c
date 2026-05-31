#include <stdio.h>

int main() {

    char ch;

    printf("Enter capital letter: ");
    scanf("%c", &ch);

    ch = ch + 32;

    printf("Small letter = %c", ch);

    return 0;
}
