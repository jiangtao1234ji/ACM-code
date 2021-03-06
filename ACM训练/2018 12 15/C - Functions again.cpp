#include<iostream>
#include<string>
#include<algorithm>
#define maxn 100100

using namespace std;

int a[maxn], b[maxn], c[maxn];

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(i)
		{
			int t = abs(a[i] - a[i-1]);
			if(i%2)
			{
				b[i] = t;
				c[i] = -t;
			}
			else
			{
				b[i] = -t;
				c[i] = t;
			}
		}
	}
	long long MAX=0;
	long long sum=0;
	for(int i=1; i<n; ++i)
	{
		if(sum + b[i] > 0)
		{
			sum += b[i];
		}
		else
			sum=0;
		MAX=max(MAX,sum);
	}
	sum=0;
	for(int i=1; i<n; ++i)
	{
		if(sum + c[i] > 0)
		{
			sum += c[i];
		}
		else
			sum=0;
		MAX=max(MAX,sum);
	}
	cout<<MAX<<endl;
	return 0;
}

