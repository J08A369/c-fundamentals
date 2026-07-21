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
            int even = 2 * j;
            sum += even * even;
        }

        total += sum;
    }

    printf("Total = %d", total);

    return 0;
}
