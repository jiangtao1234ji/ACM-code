#include<iostream>
#include<vector>
#include<algorithm>
#define maxn 300100

using namespace std;

int a[maxn];
vector<int> m[maxn];

int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
		scanf("%d", &a[i]);
	for(int i=1; i<=n-1; i++)
	{
		int x, y;
		scanf("%d%d", &x, &y);
		m[x].push_back(y);
		m[y].push_back(x);
	}
	int maxa = 0;
	for(int i=1; i<=n; i++)
		maxa=max(maxn,a[i]);
	int mx = 0, mc = 0;
	int u;
	for(int i=1; i<=n; i++)
	{
		if(a[i] == maxa)
		{
			mx++;
			u = i;
		}
		if(a[i] == maxa-1)
			mc++;
	}
	if(mx == 1)
	{
		int count = 0;
		for(int i=0; i<m[u].size(); i++)
		{
			int v = m[u][i];
			if(a[v] == maxa - 1)
				count++;
		}
		if(count == mc)
			cout<<maxa<<endl;
		else
			cout<<maxa+1<<endl;
	}
	else
	{
		int flag = 0;
		for(int i=1; i<=n; i++)
		{
			int count = 0;
			if(a[i] == maxa)
				count++;
			for(int j=0; j<m[i].size(); j++)
			{
				int v=mp[i][j];

				if(a[v]==maxn)cont++;
			}
		}
	}
	return 0;
}

