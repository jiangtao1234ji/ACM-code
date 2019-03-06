#include<iostream>
#include<cstring>
#include<algorithm>
#define maxn 501000

using namespace std;

int bit[maxn], n;

int lowbit(int x)
{
	return x&(-x);
}

void add(int i, int x)
{
	while(i<=n)
	{
		bit[i] += x;
		i+=lowbit(i);
	}
}


void sub(int i, int x)
{
	while(i<=n)
	{
		bit[i] -= x;
		i+=lowbit(i);
	}
}


int sum(int i)
{
	int s = 0;
	while(i>0)
	{
		s+=bit[i];
		i-=lowbit(i);
	}
	return s;
}

int main()
{
	int m, a;
	cin>>n>>m;
	memset(bit,0,sizeof bit);
	int ed = 0;
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &a);
		add(i,a - ed);
		ed = a;
	}
	int x, y, z, d;
	for(int i=1; i<=m; i++)
	{
		scanf("%d", &x);
		if(x == 1)
		{
			scanf("%d%d%d", &y, &z, &d);
			add(y, d);
			add(z + 1, -d);
		}
		else
		{

			printf("%d\n", sum(z) - sum(y-1));
		}
	}
	return 0;
}

