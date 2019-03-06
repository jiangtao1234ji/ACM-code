#include<iostream>
#include<list>
#include<cstring>
#include<vector>
#define maxn 2050

using namespace std;

vector<int> v[maxn];
int in[maxn],out[maxn],visit[maxn], maxx=0, count=0;

int dfs(int x, int count)
{
	if(!out[x])
		return count;
	for(int i=0; i<v[x].size(); i++)
	{
		if(!visit[x])
		{
			count++;
			visit[x]=1;
			dfs(v[x][i],count);
			if(maxx<count)
				maxx=count;
			count-=1;
			visit[x]=0;
		}
	}
	return maxx;
}

int main()
{
	int n, m;
	while(cin>>n>>m)
	{
		memset(in,0,sizeof(in));
		memset(out,0,sizeof(out));
		memset(visit,0,sizeof(visit));
		int a, b;
		for(int i=1; i<=m; ++i)
		{
			cin>>a>>b;
			v[a].push_back(b);
			in[b]++;
			out[a]++;
		}
		for(int i=1; i<=n; ++i)
			if(!in[i])
				cout<<dfs(i,0)+1<<endl;
	}
	return 0;
}
