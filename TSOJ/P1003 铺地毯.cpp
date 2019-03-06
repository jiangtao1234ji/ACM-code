#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10100

using namespace std;

int a[maxn], b[maxn], g[maxn], k[maxn];

int main()
{
	int n, x, y, ans;
	cin>>n;
	for(int i=1; i<=n; i++)
		scanf("%d%d%d%d", &a[i], &b[i], &g[i], &k[i]);
	cin>>x>>y;
	for(int i=1; i<=n; i++)
	{
		if(x<=a[i]+g[i] && x>=a[i] && y<=b[i]+k[i] && y>=b[i])
		{

			ans = i;
		}
	}
	cout<<ans<<endl;
	return 0;
}

