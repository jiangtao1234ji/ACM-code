#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#define maxn 100010

using namespace std;

struct type
{
	double a, b;
};

type x[maxn];

bool slove(double p,double t,int n)
{
	double res=0;
	for(int i=0; i<n; i++)
	{
		if(x[i].a*1.0*t*10>(x[i].b*1.0*10))
		{
			res+=(x[i].a*1.0*t-(x[i].b*1.0))/p;
		}
	}
	if(res<=t)
	{
		return true;
	}
	else return false;
}
int main(void)
{
	int n, p;
	scanf("%d%d",&n,&p);
	long long sum = 0;
	for(int i=0; i<n; i++)
	{
		scanf("%lf %lf",&x[i].a,&x[i].b);
		sum += x[i].a;
	}
	double l = 0,r = 1e15;
	int k = 0;
	while(r-l>1e-9)
	{
		k++;
		double mid = (l+r)/2;
		if(slove(p,mid,n))
			l = mid;
		else
			r = mid;
		if(k>300)
			break;
	}
	if(p>=sum)
		puts("-1\n");
	else
		printf("%.10lf\n",l);
	return 0;
}

