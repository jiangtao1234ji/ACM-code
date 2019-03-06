#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	while(cin>>n>>m)
	{
		long long ans=0;
		for(int j=0; j<m; ++j)
		{
			for(int i=1; i<=n; ++i)
			{
				ans+=i;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

