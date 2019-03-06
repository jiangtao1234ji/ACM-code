#include <iostream>
#include <algorithm>
#include <string>
#define maxn 100005

using namespace std;

int pre[maxn];

int find(int x)
{
	int r = x;
	while (pre[r] != r)
	{
		r = pre[r];
	}
	int i = x, j;
	while (i != r)
	{
		j = pre[i];
		pre[i] = r;
		i = j;
	}
	return r;
}

void join(int x, int y)
{
	int dx = find(x);
	int dy = find(y);
	if (dx != dy)
	{
		pre[dx] = dy;
	}
}

int main()
{
	int n, m, k, a, b, ans = 0;
	cin >> n >> m >> k;
	for (int i = 1; i <= n * m; i++)
		pre[i] = i;
	for (int i = 0; i < k; i++)
	{
		cin >> a >> b;
		join(a, b);
	}
	for (int i = 1; i <= n * m; i++)
		if (pre[i] == i)
			ans++;
	cout << ans << endl;
	return 0;
}