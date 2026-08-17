#include <stdio.h>

int main()
{
    int n, i, num, biggest;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    scanf("%d", &biggest);

    for(i = 1; i < n; i++)
    {
        scanf("%d", &num);

        if(num > biggest)
            biggest = num;
    }

    printf("Biggest number = %d", biggest);

    return 0;
}
