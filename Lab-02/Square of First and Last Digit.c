#include <stdio.h>

int main() {

    int num, first, last;

    printf("Enter three digit number: ");
    scanf("%d", &num);

    first = num / 100;
    last = num % 10;

    printf("Square of %d is %d\n", first, first * first);
    printf("Square of %d is %d", last, last * last);

    return 0;
}
