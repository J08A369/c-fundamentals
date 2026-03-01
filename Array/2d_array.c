#include <stdio.h>


int main()
{
    int row, column;
    scanf("%d%d",&row,&column);

    // Dynamically allocate memory of 2d array
    int a[row][column];
    int i,j;

    // take user input in 2D Array
    for(i=0;i<row;i++) {
        for(j=0;j<column;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<row;i++) {
        for(j=0;j<column;j++) {
            printf("[%2d] ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
