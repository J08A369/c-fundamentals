#include <stdio.h>

int main() {

    int a, b, q, r;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    q = a / b;
    r = a - (q * b);

    printf("Quotient = %d\n", q);
    printf("Remainder = %d", r);

    return 0;
}
