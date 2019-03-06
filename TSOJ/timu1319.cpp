#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int dp[25][25];
int main()
{
	int m, n;
	while(cin>>m>>n)
	{
		memset(dp,0,sizeof(dp));
		for (int i = 1; i <= m; i++)
		{
			dp[i][0] = 1;
		}
		for (int i = 1; i <= m; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (i == j)
				{
					dp[i][j] = dp[i][j - 1];
				}
				if (i>j)
				{
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
				}
			}
		}
		cout<<dp[m][n]<<endl;
	}
	return 0;
}
