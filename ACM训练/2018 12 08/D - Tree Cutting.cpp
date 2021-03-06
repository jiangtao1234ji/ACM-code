#include<iostream>
#include<cstring>
#include<algorithm>
#define maxn 10010

using namespace std;

struct Edge
{
	int s, next;
} edge[2*maxn];

int ans[maxn], head[maxn], vis[maxn];
int e = 0, m = 0, n;

void addedge(int s, int t)
{
	edge[e].s = s;
	edge[e].next = head[t];
	head[t] = e++;
}

int dfs(int x)
{
	int num = 0, sum = 0;
	vis[x] = 1;
	int flag = 0;
	for(int i = head[x]; i!=-1; i = edge[i].next)
	{
		if(!vis[edge[i].s])
		{
			num=dfs(edge[i].s);
			sum+=num;
			if(num>n/2)
				flag=1;
		}
	}
	if(n-sum-1>n/2)
		flag=1;
	if(!flag)
		ans[m++]=x;
	return sum+1;
}

int main()
{
	int a, b;
	cin>>n;
	memset(head,-1,sizeof(head));
	memset(vis,0,sizeof(vis));
	for(int i=0; i<n-1; i++)
	{
		cin>>a>>b;
		addedge(a,b);
		addedge(b,a);
	}
	dfs(1);
	if(m==0)
		cout<<"NONE"<<endl;
	else
	{
		sort(ans,ans+m);
		for(int i=0; i<m; i++)
			cout<<ans[i]<<endl;
	}
	return 0;
}

