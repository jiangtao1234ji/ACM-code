#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#define maxn 1010

using namespace std;

struct pig
{
	int a,p;
} r[maxn];

bool cmp(pig A,pig B)
{
	return A.p!=B.p?A.p>B.p:A.a>B.a;
}
int dp[1005];
int main()
{
	int n,k;
	while(cin>>n>>k)
	{
		for(int i=1; i<=n; i++)
			cin>>r[i].a;
		for(int i=1; i<=n; i++)
			cin>>r[i].p;
		sort(r+1,r+n+1,cmp);
		memset(dp,0,sizeof(dp));
		int sum=0;
		for(int i=1; i<=n; i++)
		{
			for(int j=k; j; j--)
			{
				int add=r[i].a-r[i].p*(j-1);
				if(add<0)
					add=0;
				dp[j]=max(dp[j],dp[j-1]+add);
				sum=max(sum,dp[j]);
			}
		}
		for(int i=1; i<=n; i++)
			cout<<dp[i]<<" ";
		cout<<sum<<endl;
	}
	return 0;
}

