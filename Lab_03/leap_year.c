#include <stdio.h>

int main() {
    int year, nearestYear;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        nearestYear = year + 1;

        while (!((nearestYear % 400 == 0) ||
                (nearestYear % 4 == 0 && nearestYear % 100 != 0))) {
            nearestYear++;
        }

        printf("%d is not a Leap Year.\n", year);
        printf("Nearest Leap Year = %d\n", nearestYear);
    }

    return 0;
}
