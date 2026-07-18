#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 40; i += 3)
    {
        if(i % 2 == 1)
            printf("%d ", i);
        else
            printf("%d ", -i);
    }

    return 0;
}
