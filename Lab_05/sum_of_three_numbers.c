#include <stdio.h>

int main() {
    int n1, n2, n3, sum;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    sum = n1 + n2 + n3;

    printf("Sum = %d\n", sum);

    return 0;
}
