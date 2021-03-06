#include<iostream>
#include<cstring>
#include<algorithm>
#define maxn 1100

using namespace std;

int a[maxn],dp[3][maxn];

int main()
{
	int n, m;
	cin>>n>>m;
	for(int i=0; i<n; i++)
		cin>>a[i];
	memset(dp,0,sizeof dp);
	int ans=0;
	for(int i=0; i<n; i++)
	{
		if(i==0)
		{
			if(a[0]==1)
				dp[0][0]=1;
			else
				dp[1][1]=1;
			continue;
		}
		for(int j=m; j>=0; j--)
		{
			if(j)
				dp[a[i]-1][j]=max(dp[a[i]-1][j],dp[a[i]%2][j-1])+1;
			else
				dp[a[i]-1][j]=dp[a[i]-1][j]+1;
			ans=max(ans,dp[a[i]-1][j]);
		}
	}
	cout<<ans<<endl;
	return 0;
}

