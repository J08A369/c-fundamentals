#include <stdio.h>

int main()
{
    int a[5][5];
    int i, j, biggest;

    printf("Enter 25 elements:\n");

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    biggest = a[0][0];

    for(i = 1; i < 5; i++)
    {
        if(a[i][i] > biggest)
            biggest = a[i][i];
    }

    printf("Biggest diagonal element = %d", biggest);

    return 0;
}
