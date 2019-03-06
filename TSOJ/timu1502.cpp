#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


int main()
{
	int n;
	while(cin>>n)
	{
		int dp[n + 10];
		dp[0] = 1;
		for(int i = 1; i <= n; ++i)
			dp[i] = 0;
		for(int i = 1; i <= n; ++i)
		{
			for(int j = i; j <= n; ++j)
			{
				dp[j] += dp[j - i];
				dp[j] %= 100000007;
			}	
		}
		cout<<dp[n]<<endl;
	}
	return 0;
}

