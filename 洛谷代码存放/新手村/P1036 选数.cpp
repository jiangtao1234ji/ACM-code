#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int a[maxn];

bool isprime(int n)
{
	for(int i=2; i*i<=n; i++)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}

int ans(int cln,int as,int start,int end)
{
	if(cln==0)
		return isprime(as);
	int sum=0;
	for(int i=start; i<=end; i++)
	{
		sum+=ans(cln-1,as+a[i],i+1,end);
	}
	return sum;
}

int main()
{
	int n, k;
	cin>>n>>k;
	for(int i=0; i<n; i++)
		cin>>a[i];
	cout<<ans(k,0,0,n-1);
	return 0;
}

