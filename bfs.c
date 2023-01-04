#include<stdio.h>

int adj[20][20], visit[20], que[20],f=0,r=-1,n,v,i,j;

void bfs(int v)
{
	for(i=1;i<=n;i++)
	{
		if(adj[v][i] && !visit[i])
		que[++r]=i;

	}
	
	if(f<=r)
	{
		visit[que[f]]=1;
		bfs(que[f++]);
	}
}

void main()
{
	char ch;
	printf("Enter the no of vertices in the graph \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		visit[i]=0;
		que[i]=0;
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			adj[i][j]=0;
			
		}
	}
	
	printf("Enter the adjacency matrix \n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			//printf("\n Is there an edge from %d-%d (press Y or N) \n",i,j);
			scanf("%d",&adj[i][j]);
			
		}
	}
	
	printf("Enter the starting vertex \n");
	scanf("%d",&v);
	bfs(v);
	
	printf("The node which are reacheable are \n");
	for(i=1;i<=n;i++)
	{
		if(visit[i]==1)
		printf("%d-> ",i);
		
		else{
		printf("BFS is not possible \n");
		break;
		}
	}
}


