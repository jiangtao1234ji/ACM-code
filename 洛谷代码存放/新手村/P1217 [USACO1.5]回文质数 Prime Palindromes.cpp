#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000005

using namespace std;

int prime[maxn], vis[maxn];
bool isprime[maxn];

void fun()
{
	int cnt = 0;
	for(int i=2; i<=maxn; i++)
	{
		if(!vis[i])
		{
			prime[cnt++] = i;
			isprime[i] = 1;
		}
		for(int j=0; j<cnt && i*prime[j]<=maxn; j++)
		{
			vis[i*prime[j]] = 1;
			if(i % prime[j] == 0)
				break;
		}
	}
}

bool huiwen(int x)
{

	int y=x,num=0;
	while (y!=0)
	{
		num=num*10+y%10;
		y/=10;
	}
	if (num==x)
		return 1;
	else
		return 0;
}


int main()
{
	int n, m;
	fun();
	cin>>n>>m;
	if(m>10000000) m=10000000;
	for(int i=n; i<=m; i++)
	{
		if(huiwen(i))
		{  
			if(isprime[i])
				cout<<i<<endl;
		}
	}
	return 0;
}

