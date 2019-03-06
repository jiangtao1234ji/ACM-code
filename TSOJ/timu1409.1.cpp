#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAXN = 100005;

long long a[MAXN],b[MAXN],c[MAXN];
long long n,sum;
int main()
{
	while(scanf("%lld",&n)!=EOF)
	{
		for(int i=0; i<n; i++)scanf("%lld",&a[i]);
		for(int i=0; i<n; i++)scanf("%lld",&b[i]);
		for(int i=0; i<n; i++)scanf("%lld",&c[i]);
		sort(a,a+n);
		sort(b,b+n);
		sort(c,c+n);
		sum = 0;
		for(int i=0; i<n; i++)
		{
			long long x = (lower_bound(a,a+n,b[i]) - a);
			long long y = (n - (upper_bound(c,c+n,b[i]) - c));
			sum += x*y;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
