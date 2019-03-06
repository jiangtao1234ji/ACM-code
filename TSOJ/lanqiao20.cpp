#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	long long int n,ans;
	while(cin>>n)
	{
		if(n<3)
			ans=n;
		else
		{
			if(n%2!=0)
				ans=n*(n-1)*(n-2);
			else if(n%3!=0)
				ans=n*(n-1)*(n-3);
			else
				ans=(n-1)*(n-2)*(n-3);
		}
		cout<<ans<<endl;
	}
	return  0;
}
