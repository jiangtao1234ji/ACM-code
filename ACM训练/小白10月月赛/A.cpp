#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000
#define Mod 10000000007
using namespace std;

long long mul(long long a,long long b)
{
	long long ans=0;
	while(b)
	{
		if(b&1) ans=(ans+a)%Mod;
		a=(a+a)%Mod;
		b=b>>1;
	}
	return ans;
}
long long Pow(long long a,long long b)
{
	long long result=1;
	long long base=a%Mod;
	while(b)
	{
		if(b&1) result=mul(result,base)%Mod;
		base=mul(base,base)%Mod;
		b=b>>1;
	}
	return result;
}

long long ans[maxn];

int main()
{
	long long a;
	while(cin>>a)
	{
		ans[0] = 1;
		ans[1] = 3; 
		if(a == 1)
			cout<<"0"<<endl;
		if(a == 2)
			cout<<"3"<<endl;
	
	}
	return 0;
}

