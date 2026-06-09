#include <stdio.h>

int main() {

    char ch;

    printf("Enter small letter: ");
    scanf("%c", &ch);

    ch = ch - 32;

    printf("Capital letter = %c", ch);

    return 0;
}
