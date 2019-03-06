#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000
#define p 10000000007
using namespace std;

long long mul(long long a,long long b)
{
	long long ans=0;
	while(b)
	{
		if(b&1) ans=(ans+a)%p;
		a=(a+a)%p;
		b=b>>1;
	}
	return ans;
}
long long Pow(long long a,long long b)
{
	long long result=1;
	long long base=a%p;
	while(b)
	{
		if(b&1) result=mul(result,base)%p;
		base=mul(base,base)%p;
		b=b>>1;
	}
	return result;
}

int fun(int n)
{
	if(n == 1)
		return 1;
	else if(n == 2)
		return 3;
	else
	{

		return 2*fun(n-1)-fun(n-2);
	}
}

int main()
{
	long long a;
	while(cin>>a)
	{
		cout<<fun(a, 0)<<endl;
	}
	return 0;
}

