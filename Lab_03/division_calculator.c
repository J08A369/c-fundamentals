#include <stdio.h>

int main() {
    float m1, m2, m3, total, percentage;

    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 60)
        printf("Division: First\n");
    else if (percentage >= 50)
        printf("Division: Second\n");
    else if (percentage >= 40)
        printf("Division: Third\n");
    else
        printf("Division: Fail\n");

    return 0;
}
