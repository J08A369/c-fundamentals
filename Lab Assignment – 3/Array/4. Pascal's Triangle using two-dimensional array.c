#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;

        for(j = 1; j < i; j++)
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    printf("Pascal's Triangle:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//Example output:

//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
