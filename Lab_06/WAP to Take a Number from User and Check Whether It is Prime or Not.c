#include <stdio.h>

int main()
{
    int num, i, prime = 1;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        prime = 0;
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is Not a Prime Number.\n", num);

    return 0;
}
