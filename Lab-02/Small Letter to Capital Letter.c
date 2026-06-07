#include <stdio.h>
#include <ctype.h>

int main() {

    char ch;

    printf("Enter small letter: ");
    scanf("%c", &ch);

    printf("Capital letter = %c", toupper(ch));

    return 0;
}
