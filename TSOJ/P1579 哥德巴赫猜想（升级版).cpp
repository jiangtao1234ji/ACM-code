#include<iostream>
#include<string>
#include<algorithm>
#define maxn 21000

using namespace std;

struct point
{
	int x, y, z;
};

point p[maxn];

int prime[maxn], vis[maxn], isprime[maxn];

int fun()
{
	int cnt = 0;
	for(int i=2; i<=maxn; i++)
	{
		if(!vis[i])
		{

			prime[cnt++] = i;
		}
		for(int j=0; j<cnt && i*prime[j] <=maxn; j++)
		{
			vis[i*prime[j]] = 1;
			if(i % prime[j] == 0)
				break;
		}
	}
	return cnt;
}

bool cmp(point a, point b)
{
	return a.x < b.x;
}

bool cmp1(point a, point b)
{
	return a.y < b.y;
}

int main()
{
	int num, cnt = 0;
	num = fun();
	int n;
	cin>>n;
	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			if(prime[i]+prime[j]+prime[k] == n)
			{
				p[cnt].x = prime[i];
				p[cnt].y = prime[j];
				p[cnt].z = prime[k];
				cnt++;
			}
		}
	}
	sort(p, p+cnt, cmp);
	int count = 0;
	for(int i=1; i<cnt; i++)
	{
		if(p[i].x == p[0].x)
			count++;
	}
	if(count > 0)
	{
		sort(p,p+count,cmp1);
		cout<<p[0].x<<" "<<p[0].y<<" "<<p[0].z<<endl;
	}
	else
		cout<<p[0].x<<" "<<p[0].y<<" "<<p[0].z<<endl;
	return 0;
}

