#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#define maxn 2050

using namespace std;

vector<int> v[maxn];
int in[maxn],out[maxn],sum[maxn];

int dfs(int x)
{
	if(!out[x])
		sum[x]++;
	else
	{
		for(int i=0; i<v[x].size(); i++)
		{
			if(sum[v[x][i]])
				sum[x]+=sum[v[x][i]];
			else
				sum[x]+=dfs(v[x][i]);
		}
	}
	return sum[x];
}

int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int ans=0;
		memset(in,0,sizeof(in));
		memset(out,0,sizeof(out));
		for(int i=0; i<=n; ++i)
			sum[i]=0;
		int a,b;
		for(int i=1; i<=m; i++)
		{
			cin>>a>>b;
			v[a].push_back(b); 
			in[b]++;
			out[a]++;
		}
		for(int i=1; i<=n; i++)
			if(!in[i]&&out[i]) 
				ans+=dfs(i);
		cout<<ans<<endl;
		for(int i=1; i<=m; i++)
			v[i].clear();
	}
	return 0;

}
