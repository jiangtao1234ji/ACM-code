#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#define LL long long
using namespace std;

int n;
int x[55],y[55];
LL dis[55],ans[55];

int main()
{
	scanf("%d",&n);
	for(int i=1; i<=n; ++i) scanf("%d%d",&x[i],&y[i]);
	memset(ans,0x7f,sizeof(ans));
	for(int i=1; i<=n; ++i) 
		for(int j=1; j<=n; ++j) 
		{
			for(int k=1; k<=n; ++k) 
				dis[k]=abs(x[k]-x[i])+abs(y[k]-y[j]);
			sort(dis+1,dis+1+n);
			LL tot=0;
			for(int k=1; k<=n; ++k)
				tot+=dis[k],ans[k]=min(ans[k],tot);
		}
	for(int i=1; i<=n; ++i) printf("%lld\n",ans[i]);
	return 0;
}
