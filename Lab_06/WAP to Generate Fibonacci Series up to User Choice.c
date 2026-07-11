#include <stdio.h>

int main()
{
    int n, a = 1, b = 1, c, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i == 1 || i == 2)
            printf("%d ", 1);
        else
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }

    return 0;
}
