#include<iostream>
#include<string>
#include<algorithm>
#define maxn 21000

using namespace std;

int prime[maxn], vis[maxn], isprime[maxn];

int fun(int n)
{
	int cnt = 0;
	for(int i=2; i<=n; i++)
	{
		if(!vis[i])
		{
			prime[cnt++] = i;
			isprime[i] = 1;
		}
		for(int j=0; j<cnt && i*prime[j] <=n; j++)
		{
			vis[i*prime[j]] = 1;
			if(i % prime[j] == 0)
				break;
		}
	}
	return cnt;
}

int main()
{
	int num, flag = 0;
	int n;
	cin>>n;
	num = fun(n);
	for(int i=0; i<num; i++)
	{
		for(int j=i; j<num; j++)
		{
			if(isprime[n-prime[i]-prime[j]])
			{
				flag = 1;
				cout<<prime[i]<<" "<<prime[j]<<" "<<n-prime[i]-prime[j]<<endl;
				break;
			}
		}
		if(flag)
			break;
	}
	return 0;
}

