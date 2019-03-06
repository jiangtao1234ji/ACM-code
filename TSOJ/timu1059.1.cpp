#include <iostream>
#include <cstring>
#define N 1005

using namespace  std;

int dp[N][N];
int main ()
{
	int k,n,i,j;
	while(cin>>n)
	{
		memset(dp,0,sizeof(dp));
		for(i=1; i<=n; i++)
			for(j=1; j<=i; j++)
				cin>>dp[i][j];
		for(i=n; i>0; i--)
			for(j=1; j<=i; j++)
				dp[i][j]+=min(dp[i+1][j],dp[i+1][j+1]);
		cout<<dp[1][1]<<endl;
	}
	return 0;
}
