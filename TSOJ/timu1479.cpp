#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#define maxn 1000500

using namespace std;

int dp[maxn], ans[maxn];
int x[maxn], y[maxn];

int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0; i<n; ++i)
			cin>>x[i]>>y[i];
		memset(ans,0x7f,sizeof(ans));
		for(int i=0; i<n; ++i)
			for(int j=0; j<n; ++j)
			{
				for(int k=0; k<n; ++k)
					dp[k]=abs(x[k]-x[i])+abs(y[k]-y[j]);
				sort(dp,dp+n);
				int sum=0;
				for(int k=0; k<n; ++k)
				{
					sum+=dp[k];
					ans[k]=min(ans[k],sum);
				}
			}
		for(int i=0; i<n; ++i)
			cout<<ans[i]<<endl;
	}
	return 0;
}

