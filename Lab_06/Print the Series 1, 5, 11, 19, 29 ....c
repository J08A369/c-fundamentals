#include <stdio.h>

int main()
{
    int n, i, term = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", term);
        term = term + (2 * i + 2);
    }

    return 0;
}
