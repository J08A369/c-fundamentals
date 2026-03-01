#include <stdio.h>

int main()
{
    int i,a,b,c,n;
    a=1;
    b=1;
    scanf("%d",&n);
    printf("1 1 ");
    for(i=3; i<=n; i++)
    {
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}
/// element = 1,1,2,3
///
