#include<stdio.h>
#include<stdlib.h>

int res[50],n,visit[50],j;

void adjMatrix(int adj[50][50],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        for ( j = 0; j < n; j++)
        {
            adj[i][j] = 0;
        }
        
    }

    for (i=0;i<n;i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&adj[i][j]);
        }
        
    }
}

void DFS(int u,int n,int adj[50][50])
{
    int v;
    visit[u] = 1;
    for(v=0;v<n;v++)
    {
        if(visit[v]==0 && adj[u][v] == 1)
        DFS(v,n,adj);
    }
    
    res[++j] = u;
}

void topoSort(int n, int adj[50][50])
{
    int i,u;
    for(i=0;i<n;i++)
    {
        visit[i] = 0;
    }
    j=-1;
    for ( u = 0; u < n; u++)
    {
        if(visit[u]==0)
        DFS(u,n,adj);
    }
    
}

int main()
{
    int i,adj[50][50];
    printf("\nEnter the number of vertices in the graph: ");
    scanf("%d",&n);

    printf("\nEnter the adjacency matrix: \n");
    adjMatrix(adj,n);

    printf("\n The topological  order is: \n");
    topoSort(n,adj);

    for ( i = n; i >=1; i--)
    {
        printf("-->%d",res[i]);
    }
}

// adjMatrix function:

// Input: An empty adj matrix of size n x n, and the number of vertices n.
// Output: Fills the adj matrix with edge weights entered by the user.
// 1.1. Set i to 0.
// 1.2. For each row in the adj matrix:
// 1.2.1. Set j to 0.
// 1.2.2. For each column in the row:
// 1.2.2.1. Set the value of adj[i][j] to 0.
// 1.2.2.2. Increment j.
// 1.3. Set i to 0.
// 1.4. For each row in the adj matrix:
// 1.4.1. Set j to 0.
// 1.4.2. For each column in the row:
// 1.4.2.1. Read an integer from the user and set the value of adj[i][j] to the integer.
// 1.4.2.2. Increment j.
// 1.4.3. Increment i.

// DFS function:

// Input: A starting node u, the number of vertices n, and the adjacency matrix adj.
// Output: Performs depth-first search on the graph starting from node u.
// 2.1. Set v to 0.
// 2.2. Mark u as visited in the visit array.
// 2.3. For each node v in the graph:
// 2.3.1. If v has not been visited and there is an edge between u and v in the adj matrix:
// 2.3.1.1. Call DFS recursively on v.
// 2.4. Add u to the res array at index j.
// 2.5. Decrement j.

// topoSort function:

// Input: The number of vertices n, and the adjacency matrix adj.
// Output: Performs topological sorting on the graph and prints the result.
// 3.1. Set all nodes as unvisited in the visit array.
// 3.2. Set j to n - 1.
// 3.3. For each node u in the graph:
// 3.3.1. If u has not been visited, call DFS on u.
// 3.4. Print the res array in reverse order.