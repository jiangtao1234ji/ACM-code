#include<iostream>
#include<string>
#include<algorithm>
#define maxn 100010

using namespace std;

const int mod = 1e9 + 7;
char s[maxn];
long long Mod(char *a, int Mod)
{
	long long sum = 0;
	for(int i=0; a[i] != '\0'; i++)
	{
		sum = (sum*10 + a[i] - '0') % Mod;
	}
	return sum;
}

long long Ksm(long long a, long long k)
{
	k = (k+mod) % mod;
	long long sum = 1;
	while(k)
	{
		if(k&1)
			sum = sum*a%mod;
		a = a*a%mod;
		k>>=1;
	}
	return sum;
}

int main()
{
	while(~scanf("%s", s))
	{
		long long n = Mod(s,mod-1) - 1;
		printf("%lld\n",Ksm(2,n));
	}
	return 0;
}

