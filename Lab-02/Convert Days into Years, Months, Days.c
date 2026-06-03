#include <stdio.h>

int main() {

    int days, years, months, rem;

    printf("Enter days: ");
    scanf("%d", &days);

    years = days / 365;
    rem = days % 365;

    months = rem / 30;
    rem = rem % 30;

    printf("%d Years %d Months %d Days", years, months, rem);

    return 0;
}
