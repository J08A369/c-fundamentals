#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Square = %d\n", num * num);
    else
        printf("Cube = %d\n", num * num * num);

    return 0;
}
