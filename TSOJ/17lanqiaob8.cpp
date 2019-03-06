#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;

int dp[100010];
int a[105];
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int i,j,n;
	memset(dp,-10000,sizeof(dp));
	dp[0]=0;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1; i<=n; i++)
	{
		for(j=a[i]; j<=100000; j++)
		{
			dp[j]=max(dp[j],dp[j-a[i]]+1);
		}
	}
	int count=0;
	for(i=1; i<=100000; i++)
	{
		if(dp[i]<0)
		{
			count++;
		}
	}
	if(count<5000)
		printf("%d",count);
	else
		printf("INF");
	return 0;
}

