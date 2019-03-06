#include<iostream>
#include<cstring>
#include<algorithm>
#define maxn 1000100

using namespace std;

int vis[maxn], a[maxn]= {0,1};

int main()
{
	int n, m, k, k1;
	scanf("%d%d%d",&n,&m,&k)
	for(int i=0; i<m; i++)
	{
		scanf("%d", &k1);
		vis[k1] = 1;
	}
	int bone = 1, flag = 1, ans, x, y;
	for(int i=0; i<k; i++)
	{
		scanf("%d%d",&x,&y);
		if(!a[x]&&!a[y])
			continue;
		if(a[x] && b[x] || a[y] && b[y])
			break;
		int temp = a[x];
		a[x] = a[y];
		a[y] = temp;
	}
	for(int i=1; i<=n; i++)
	{
		if(a[i])
		{

			printf("%d", i)
		}
	}
	return 0;
}

