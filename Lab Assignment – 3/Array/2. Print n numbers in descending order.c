#include <stdio.h>

int main()
{
    int n, i, j, temp;
    int a[100];

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Descending order:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
