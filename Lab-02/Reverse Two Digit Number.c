#include <stdio.h>

int main() {

    int num, first, last, reverse;

    printf("Enter two digit number: ");
    scanf("%d", &num);

    first = num / 10;
    last = num % 10;

    reverse = (last * 10) + first;

    printf("Reverse = %d", reverse);

    return 0;
}
