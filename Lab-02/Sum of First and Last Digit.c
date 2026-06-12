#include <stdio.h>

int main() {

    int num, first, last, sum;

    printf("Enter three digit number: ");
    scanf("%d", &num);

    first = num / 100;
    last = num % 10;

    sum = first + last;

    printf("Sum = %d", sum);

    return 0;
}
