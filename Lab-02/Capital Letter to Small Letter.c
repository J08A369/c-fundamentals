#include <stdio.h>
#include <ctype.h>

int main() {

    char ch;
    printf("Enter capital letter: ");
    scanf("%c", &ch);

    printf("Small letter = %c", tolower(ch));

    return 0;
}
