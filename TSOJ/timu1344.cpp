#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int dp[1000][1000];
int lpsDp(string str, int n)
{
	int tmp;
	memset(dp, 0, sizeof(dp));
	for (int i = 0; i < n; ++i)  
		dp[i][i] = 1;
	for (int i = 1; i < n; ++i)
	{
		tmp = 0;
		for (int j = 0; j + i < n; j++)
		{
			if (str[j] == str[j + i])
				tmp = dp[j + 1][j + i - 1] + 2;
			else
				tmp = max(dp[j + 1][j + i], dp[j][j + i - 1]);
			dp[j][j + i] = tmp;
		}
	}
	return dp[0][n - 1];
}

int main()
{
	string a;
	while(cin>>a)
	{
		int b=a.size();
		int res = lpsDp(a,b);
		cout << res << endl;
		getchar();
	}
	return 0;
}
