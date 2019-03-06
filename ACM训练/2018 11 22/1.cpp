#include<iostream>
#include<cstring>
#include<algorithm>
#define maxn 120

using namespace std;

int map[maxn][maxn];
int dis[10100];
int vis[10100];
int n, m;

void dijkstra(int u)
{
	memset(dis,88,sizeof(dis));
	int start = u;
	vis[start] = 1;
	for(int i=1; i<=n; ++i)
	{
		dis[i] = min(dis[i], map[start][i]);
	}
	
	for(int i=1; i<=n-1; ++i)
	{
		int minn = 1e8;
		for(int j=1; j<=n; ++j)
		{
			if(vis[j] == 0 && minn > dis[j])
			{
				minn = dis[j];
				start = j;
			}
		}
		vis[start] = 1;
		for(int j=1; j<=n; ++j)
			dis[j] = min(dis[j], dis[start]+map[start][j]);
	}
}

int main()
{
	while(cin>>n>>m)
	{
		if(n == 0 && m == 0)
			break;
		memset(map,88,sizeof(map));
		for(int i=1; i<=n; i++)
		{
			int a, b, c;
			cin>>a>>b>>c;
			map[a][b] = c;
		}
		for(int i=1; i<=n; ++i)
			for(int j=1; j<=n; ++j)
				if(i == j)
					map[i][j] = 0;
		dijkstra(1);
		for(int i=1; i<=n; i++)
			cout<<dis[i]<<" ";
		cout<<endl;
	}
	
	return 0;
}

