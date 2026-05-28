#include <stdio.h>

int main() {

    int a, b, c;
    float avg;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    avg = (float)(a + b + c) / 3;

    printf("Average = %.2f", avg);

    return 0;
}
