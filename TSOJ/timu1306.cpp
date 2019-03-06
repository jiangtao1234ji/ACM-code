#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 10000 

using namespace std;

int n;
int C;
int v[MAX];
int w[MAX];
int dp[MAX];
void solve()
{
	dp[0] = 0;
	int ans = -1;
	for(int i = 1; i <= C; i++)
	{
		dp[i] = -1;
	}

	for(int i = 1; i <= C; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i >= v[j])
			{
				dp[i] = max(dp[i], dp[i - v[j]] + w[j]);
				if(dp[i] > ans)
				{
					ans = dp[i];
				}
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	while(cin >> n >> C)
	{
		for(int i = 1; i <= n; i++)
		{
			cin >> v[i] >> w[i];
		}
		solve();
	}
	return 0;
}
