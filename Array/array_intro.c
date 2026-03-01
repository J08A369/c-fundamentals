#include <stdio.h>
#include <limits.h>

int main()
{
    int n; // number of elements
    scanf("%d",&n);
    int a[n]; // a[5] = a[0]... a[4]
    int i;
    int max_number = INT_MIN;
    int min_number = INT_MAX;
    int sum = 0;


    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(max_number < a[i]) {
                max_number = a[i];
                //printf("Updated max to: %d\n",a[i]);
        }
        if(min_number > a[i]) {
                min_number = a[i];
               //printf("Updated min to: %d\n",a[i]);
        }
        sum+=a[i];
    }
    printf("sum: %d\n",sum);

}

/*
5
1 2 5 8 -1


*/
