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
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &a);
		add(i,a);
	}
	int x, y, z;
	for(int i=1; i<=m; i++)
	{
		scanf("%d%d%d", &x, &y, &z);
		if(x == 1)
			add(y,z);
		else
			printf("%d\n", sum(z) - sum(y-1));
	}
	return 0;
}

