#include <stdio.h>

int main()
{
    int num, base, rem;
    int result[50], i = 0, temp;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Enter base (2-16): ");
    scanf("%d", &base);

    temp = num;

    while(temp > 0)
    {
        result[i] = temp % base;
        temp /= base;
        i++;
    }

    printf("\nDecimal Number = %d\n", num);
    printf("Base = %d\n", base);
    printf("Converted Number = ");

    while(i--)
    {
        if(result[i] < 10)
            printf("%d", result[i]);
        else
            printf("%c", result[i] + 55);
    }

    return 0;
}
