#include<iostream>
#include<math.h>
#define mod 10000

using namespace std;

int fun(int a, int b)
{
	int ans=1, c;
	c=a%mod;
	while(b!=0)
	{
		if(b&1)
			ans=(ans*c)%mod;
		b>>=1;
		c=(c*c)%mod;
	}
	return ans;
}
int main()
{
	int f[10001]={0};
	int N, a, b, c;
	while(cin>>N)
	{
		for(int i=0; i<N; i++)
		{
			int sum=0;
			cin>>a>>b;
			for(int i=1; i<=mod; i++)
			{
				f[i]=(f[i-1]+fun(i,b))%mod;
			}
			sum=(a/mod*f[mod]+f[a%mod])%mod;
			cout<<sum<<endl;
		}

	}
	return 0;
}
