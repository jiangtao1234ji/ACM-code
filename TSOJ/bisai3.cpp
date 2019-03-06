#include <cstdio>
#include <iostream>

using namespace std;

#define MAX 15
int grid[MAX][MAX], queue[MAX*MAX], vis[MAX][MAX];
int mini = 99999, m, n;
void dfs(int a, int b, int sum, int tot)
{
	if(a>=n || a<0) return;
	if(b>=m || b<0) return;
	if(sum < 0) return;
	if(sum == 0)
		if(mini > tot)
		{
			mini = tot;
			return;
		}
	vis[a][b] = 1;
	if(vis[a][b+1] == 0)  dfs(a, b+1, sum-grid[a][b+1], tot+1);
	if(vis[a][b-1] == 0)  dfs(a, b-1, sum-grid[a][b-1], tot+1);
	if(vis[a+1][b] == 0)  dfs(a+1, b, sum-grid[a+1][b], tot+1);
	if(vis[a-1][b] == 0)  dfs(a-1, b, sum-grid[a-1][b], tot+1);
	vis[a][b] = 0;
}

int main(void)
{
	int sum=0;
	scanf("%d %d",&m,&n);
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
		{
			scanf("%d",&grid[i][j]);
			sum+=grid[i][j];
		}
	if(sum%2 != 0)
	{
		printf("0\n");
		return 0;
	}
	dfs(0, 0, sum/2-grid[0][0], 1);
	printf("%d\n",mini);
	return 0;
}
