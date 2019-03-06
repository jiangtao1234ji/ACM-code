#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	while(cin>>t)
	{
		int a[25];
		int dp[105][105];
		while(t--)
		{
			int n, x, sum=0;
			cin>>n>>x;
			for(int i=0; i<n; ++i)
			{
				cin>>a[i];
				sum+=a[i];
			}
			if(sum<x)
				cout<<"-1"<<endl;
			else
			{
				for(int i=0; i<105; i++)
					for(int j=0; j<105; j++)  
						dp[i][j]=1e8;
				for(int i=1; i<=n; i++)
				{
					for(int j=1; j<=x; j++)
					{
						if(j<=a[i])
							dp[i][j] = min(dp[i-1][j], dp[i-1][j-a[i]]+a[i]);
						else
							dp[i][j] = dp[i-1][j];
					}
				}
				for(int i=1; i<=n; ++i)
					for(int j=1; j<=x; ++j)
						cout<<dp[i][j]<<" ";
					cout<<endl;
			}
		}
	}
	return 0;

}

