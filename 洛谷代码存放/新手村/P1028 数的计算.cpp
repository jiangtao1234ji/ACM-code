#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	int n,f[1010];
	f[0]=f[1]=1;
	cin>>n;
	for(int i=2; i<=n; i++)
	{
		if(i%2==0)
		{
			f[i]=f[i-1]+f[i/2];
		}
		else
		{
			f[i]=f[i-1];
		}
	}
	cout<<f[n]<<endl;
}

