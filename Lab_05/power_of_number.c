#include <stdio.h>
#include <math.h>

int main() {
    int base, power;

    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);

    printf("Result = %.0f\n", pow(base, power));

    return 0;
}
