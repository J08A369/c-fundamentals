
#include <stdio.h>

int main()
{
    int a[] = {1545,3,5,4,7};
    int len = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<len; i++)
    {
        printf("%d\n",*a);
    }
    return 0;
}

