#include<iostream>
#include<cstring>
#include<algorithm>
#define INF 999999

using namespace std;

int sum[101],dp[101][101];

int fmin(int i,int j)
{
	int k;
	if(dp[i][j]&&dp[i][j]!=INF)
		return dp[i][j];
	dp[i][j]=INF;
	if(i==j)
		return 0;
	for(k=i; k<=j; k++)
		dp[i][j]=min(dp[i][j],fmin(i,k)+fmin(k+1,j)+sum[j]-sum[i-1]);
	return dp[i][j];
}

int fmax(int i,int j)
{
	int k;
	if(dp[i][j]&&dp[i][j]!=INF)
		return dp[i][j];
	dp[i][j]=INF;
	if(i==j)
		return 0;
	for(k=i; k<=j; k++)
		dp[i][j]=max(dp[i][j],fmax(i,k)+fmax(k+1,j)+sum[j]-sum[i-1]);
	return dp[i][j];
}


int main()
{
	int i;
	int n,w[101];
	while(cin>>n)
	{
		memset(dp,0,sizeof(dp));
		memset(sum,0,sizeof(sum));
		for(i=1; i<=n; i++)
		{
			cin>>w[i];
			sum[i]=sum[i-1]+w[i];
		}
		cout<<fmax(1,i-1)<<" "<<fmin(1,i-1)<<endl;
	}
	return 0;
}
