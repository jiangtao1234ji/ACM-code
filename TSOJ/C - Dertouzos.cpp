#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#define maxn 100010

using namespace std;

int prime[maxn];
int vis[maxn];

int fun()
{
	memset(vis, 0, sizeof(vis));
	int count = 0;
	for(int i=2; i<=maxn; i++)
	{
		if(vis[i] == 0)
			prime[count++] = i;
		for(int j=0; j<count&&i*prime[j]<=maxn; j++)
		{
			vis[i*prime[j]] = 1;
			if(i%prime[j] == 0)
				break;
		}
	}
	return count;
}

int main()
{
	int t;
	while(~scanf("%d", &t))
	{
		int p = fun();
		while(t--)
		{
			int ans = 0;
			int n, d;
			scanf("%d%d", &n, &d);
			while(primes[l] <= (n - 1) / d)
			{

				l ++;

				if(d % primes[l - 1] == 0) break;

			}

			printf("%d\n", l);
		}
	}
	return 0;
}

