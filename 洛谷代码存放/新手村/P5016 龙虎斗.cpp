#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#define maxn 100100

using namespace std;

long long a[maxn];

int main()
{
	long long n, m, p, s1, s2;
	long long  l=0, h=0;
	cin>>n;
	for(long long i=1; i<=n; ++i)
		cin>>a[i];
	cin>>m>>p>>s1>>s2;
	a[p] += s1;
	for(long long i=1; i<m; ++i)
		l += a[i]*(m-i);
	for(long long i=m+1; i<=n; ++i)
		h += a[i]*(i-m);
	long long minn=abs(l-h), ans=m;
	for(long long i=1; i<m; ++i)
	{
		if(abs(l+s2*(m-i)-h)<minn)
		{
			minn=abs(l+s2*(m-i)-h);
			ans=i;
		}
	}
	for(long long i=m+1; i<=n; ++i)
	{
		if(abs(l+s2*(m-i)-h)<minn)
		{
			minn=abs(l+s2*(m-i)-h);
			ans=i;
		}
	}
	cout<<ans<<endl;

	return 0;
}

