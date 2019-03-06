#include<iostream>
#include<string>
#include<algorithm>
#define maxn 100500

using namespace std;

int n, f;
double a[maxn], sum[maxn], d[maxn];

int main()
{
	cin>>n>>f;
	double l = 1e9, r = 0;
	for(int i=1; i<=n; ++i)
	{
		cin>>a[i];
		r = max(r, a[i]);
		l = min(l, a[i]);
	}
	while(r-l>1e-4)
	{
		double Mid=(l+r)/2;
		for(int i=1; i<=n; i++)
			d[i]=a[i]-Mid;
		for(int i=1; i<=n; i++)
			sum[i]=sum[i-1]+d[i];
		double maxd = -1e9, mind = 1e9;
		for(int i=f; i<=n; i++)
		{
			mind = min(mind, sum[i - f]);
			maxd = max(maxd, sum[i]-mind);
		}
		if(maxd>=0)
			l=Mid;
		else
			r=Mid;
	}
	cout<<int(r*1000)<<endl;
	return 0;
}

