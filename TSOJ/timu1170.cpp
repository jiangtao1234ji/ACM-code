#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int maxn = 1000100;

int d[maxn];
bool visit[maxn];

bool fun(int n)
{
	int c = 0;
	while(n)
	{
		c += n%10;
		n/=10;
	}
	return visit[c];
}

void dabiao()
{
	for(int i = 0; i<=1000000; ++i)
		visit[i]=true;
	visit[0]=visit[1]=false;
	for(int i = 2; i<=1000000; ++i)
	{
		if(visit[i])
		{
			for (int j=i*2 ; j<=1000000; j+=i)
				visit[j] = false;
		}
	}
	d[0]=0;
	for(int i =1; i<1000000; ++i)
	{
		d[i] = d[i-1];
		if(visit[i]&&fun(i))
			d[i]++;
	}
}

int main()
{
	dabiao();
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			int a, b;
			scanf("%d %d", &a, &b);
			printf("%d\n", d[b] - d[a-1]);
		}
	}
	return 0;
}

