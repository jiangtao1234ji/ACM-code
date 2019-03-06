#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int n, a1, b1, c1;
long long a[105000],b[105000],c[105000];
int main()
{
	while(cin>>n)
	{
		for(int i=0; i<=105000; i++)
		{
			a[i]=0;
			b[i]=0;
			c[i]=0;
		}
		for(int i=0; i<n; i++)
		{
			cin>>a1;
			a[a1]++;
		}
		for(int i=0; i<n; i++)
		{
			cin>>b1;
			b[b1]++;
		}
		for(int i=0; i<n; i++)
		{
			cin>>c1;
			c[c1]++;
		}
		for(int i=102000; i>=0; i--)
		{
			c[i] = c[i]+c[i+1];
			b[i] = b[i]*c[i+1]+b[i+1];
			a[i] = a[i]*b[i+1]+a[i+1];
		}
		cout<<a[0]<<endl;
	}
	return 0;
}
