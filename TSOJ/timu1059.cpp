#include <iostream>
#include <algorithm>
#define N  1000

using namespace std;

int a[N][N];
int dp[N][N];
int n;

void fun()
{
	for (int i = 0; i < n; ++i)
	{
		dp[n - 1][i] = a[n - 1][i];
	}
	int minn;
	for (int i = n - 1; i >= 0; --i)
	{
		for (int j = 0; j <= i; ++j)
		{
			minn = min(dp[i + 1][j], dp[i + 1][j + 1]);
			dp[i][j] = minn + a[i][j];
		}
	}
}
int main()
{
	while(cin >> n)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				cin >> a[i][j];
			}
		}
		fun();
		cout<<dp[0][0]<<endl;
	}
	return 0;
}
