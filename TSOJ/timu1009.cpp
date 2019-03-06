#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool check(int n)
{
	for(int i=2; i*i<=n; ++i)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	while(cin>>n)
	{
		long ans=0;
		for(int i=2; i<n; ++i)
			if(check(i))
				ans+=i;
		cout<<ans<<endl;
	}
	return 0;
}

