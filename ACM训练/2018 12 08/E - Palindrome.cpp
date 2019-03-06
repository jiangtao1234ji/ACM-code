#include<iostream>
#include<string>
#include<algorithm>
#define maxn 5100

using namespace std;

int dp[2][maxn];

int main()
{
	int n;
	cin>>n;
	string a, b;
	cin>>a;
	int k = 0;
	for(int i=n - 1; i>=0; i--)
		b[k++] = a[i];
	int flag = 1;
	for(int i=1; i<=n; i++)
	{
		flag = 1-flag;
		for (int j = 1; j <= n; j++)
		{
			if (a[i-1] == b[j-1])
				dp[flag][j] = dp[1-flag][j-1] + 1;
			else
				dp[flag][j] = max(dp[flag][j-1],dp[1-flag][j]);
		}
	}
	cout<<n-dp[flag][n]<<endl;
	return 0;
}

