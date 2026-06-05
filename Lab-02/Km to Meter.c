#include <stdio.h>

int main() {

    float km, meter;

    printf("Enter kilometer value: ");
    scanf("%f", &km);

    meter = km * 1000;

    printf("Meter = %.2f", meter);

    return 0;
}
