#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#define INF 999999999

using namespace std;

struct M
{
	int x;
	int y;	
}m[1010];

int dp[1010][1010];
int solve(int n)
{
	memset(dp,0,sizeof(dp));
	for (int len = 2; len <= n; len++)
	{
		for(int i=1; i<=n-len+1; i++)
		{
			int j = i+len-1;
			dp[i][j] = dp[i+1][j] + m[i-1].x*m[i-1].y*m[j-1].y;
			for (int k = i+1; k < j; k++)
			{
				int count = dp[i][k] + dp[k+1][j] + m[i-1].x*m[k-1].y*m[j-1].y;
				if (count < dp[i][j])
					dp[i][j] = count;
			}
		}
	}
	return dp[1][n];
}
int main()
{
	int n;
	while(cin>>n)
	{
		bool falg=false;
		for(int i=0; i<n; i++)
		{
			cin>>m[i].x>>m[i].y;
		}
		for(int i=0; i<n-1; i++)
		{
			if(m[i].y != m[i+1].x)
			{
				falg = true;
				break;
			}
		}
		if(!falg)
		{
			cout<<solve(n)<<endl;
		}
		else
			cout<<"invalid argument"<<endl;
		
	}
	return 0;
}

