#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(int n)
{
	for(int i=2; i*i<=n; ++i)
	{
		if(n%i==0)
			return 0;
	}
	return n;
}
int main()
{
	int n;
	while(cin>>n)
	{
		long long ans=0;
		for(int i=2; i<n; ++i)
		{
			ans+=fun(i);
		}
		cout<<ans<<endl;
	}
	return 0;
}

