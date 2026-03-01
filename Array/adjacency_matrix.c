#include <stdio.h>

int main()
{
    int node;
    printf("Number of nodes:");
    scanf("%d",&node);

    int i,j;
    char names[node][100];
    for(i=0;i<node;i++) {
        scanf(" %s",names[i]);
    }



    // Dynamically allocate memory of 2d array
    int graph[node][node];

    // reset value of whole array
    for(i=0; i<node; i++)
    {
        for(j=0; j<node; j++)
        {
            graph[i][j] = 0;
        }
    }

    // input edges
    int edge;
    printf("Number of edges: ");
    scanf("%d",&edge);
    int source, destination;

    for(i=0; i<edge; i++)
    {
        scanf("%d%d",&source, &destination);
        graph[source][destination] = 1;
    }

    // print graph
    for(i=0; i<node; i++)
    {
        for(j=0; j<node; j++)
        {
            if(graph[i][j]==1)
            {
                printf("%s is connected with %s\n",names[i],names[j]);
            }
        }
        printf("\n");
    }


    return 0;
}
