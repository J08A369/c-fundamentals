#include <stdio.h>

int main()
{
    int n, i, j;
    int sum = 0, total = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = 0;

        for(j = 1; j <= i; j++)
        {
            int odd = 2 * j - 1;
            sum += odd * odd;
        }

        total += sum;
    }

    printf("Total = %d", total);

    return 0;
}
