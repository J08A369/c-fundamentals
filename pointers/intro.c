#include <stdio.h>

int main()
{
    int a = 10;
    int* p = &a;

    printf("value of a=%d\n",a);
    printf("address of a=%x\n",&a);

    printf("value of p=%x\n",p);
    printf("address of p=%x\n",&p);

    printf("value of the address holding p= %d\n",*p);

    return 0;
}
