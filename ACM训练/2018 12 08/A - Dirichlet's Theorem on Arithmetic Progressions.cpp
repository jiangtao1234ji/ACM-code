#include<iostream>
#include<cstring>
#include<algorithm>
#define maxn 100000000 

using namespace std;

int prime[maxn], vis[maxn];

void fun()
{
	int cnt = 0;
	for(int i=2; i<=maxn; i++)
	{
		if(!vis[i])
			prime[cnt++] = i;
		for(int j = 0; j<cnt && i*prime[j]<=maxn; j++)
        {
            vis[i*prime[j]] = 1;
            if(i % prime[j] == 0) 
			break;
        }
	}
	memset(vis,0,sizeof(vis));
	for(int i=0; i<cnt; i++)
		vis[prime[i]] = 1;
} 


int main()
{
	int a, d, n;
	fun();
	while(1)
	{
		cin>>a;
		cin>>d;
		cin>>n;
		if(a==0&&d==0&&n==0)
			break;
		int count = 0;
		while(1)
		{
			if(vis[a])
				count++;
			else
				a+=d;
			if(count == n)
				break;
		}
		cout<<a<<endl;
	}
	return 0;
}

