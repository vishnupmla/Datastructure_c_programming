#include<stdio.h>

int a,b,u,v,i,j,n;
int visited[10]={0},adj[10][10],ne=1,min,mincost=0;

void main()
{
    printf("\nEnter the number of nodes: ");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix:\n");
    for ( i = 1; i <= n; i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("Enter the cost for (%d,%d): ",i,j);
            scanf("%d",&adj[i][j]);

            if(adj[i][j]==0)
                adj[i][j]=999;
        }
    }
    
    visited[1]=1;
    printf("\n");

    while(ne<n)
    {
        for(i=1, min=999;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if (adj[i][j] < min)
                {
                    if(visited[i]!=0)
                    {
                        min = adj[i][j];
                        a=u=i;
                        b=v=j;
                    }
                }
            }
        }

        if (visited[u]==0 || visited[v] == 0)
        {
            printf("Edge %d:(%d,%d) cost:%d \n",ne++,a,b,min);
            mincost += min;
            visited[b] = 1;
        }
        adj[a][b] = adj[b][a] = 999;
    }

    printf("\nThe mincost = %d",mincost);
}

// Initialize the number of nodes n, an adjacency matrix adj[n][n], and visited[] array with 0's.
// Get input for the adjacency matrix adj[n][n] from the user.
// Set visited[1] to 1 to mark the first node as visited.
// While the number of edges ne is less than n-1, repeat steps 5-9.
// Initialize min to a large value and search the adjacency matrix for the minimum cost edge that connects a visited node and an unvisited node. If found, set the edge's weight to min, and set u and v as the indices of the nodes that are connected by the edge.
// Check if u and v have been visited previously. If either u or v has not been visited, mark it as visited and increment the number of edges ne.
// Add the weight of the current edge to mincost.
// Set the weight of the edge (u,v) and (v,u) in the adjacency matrix to a large value to prevent revisiting them.
// Repeat steps 5-8 until ne = n-1.
// Print the minimum cost of the spanning tree.