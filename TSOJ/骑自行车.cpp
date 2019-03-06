#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
long long m[1001][1001];
bool vis[1001][1001];

int fun(int i, int n)
{
	if (vis[i][n])
		return m[i][n];
	vis[i][n] = true;
	if (n == 0)
		return m[i][n] = 1;
	else if (i >= n)
		return m[i][n] = 0;
	else
	{
		for (int j = i + 1; j <= n; ++j)
		{
			m[i][n] = m[i][n]+fun(j, n - j)%100001;
		}
		return m[i][n]%100001;
	}
}
int main()
{
	int n;
	while (cin >> n)
	{
		memset(m, 0, sizeof(m));
		memset(vis, false, sizeof(vis));
		for (int i = 1; i <= n; ++i)
		{
			fun(i, n - i);
		}
		for (int i = 1; i <= n; ++i)
			m[0][n] = (m[0][n]+m[i][n-i])%100001;
		cout << m[0][n]%100001 << endl;
	}
}
