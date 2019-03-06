#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	int t;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n>>m;
			long long a=1, b=1, c=1;
			for(int i=1; i<=m; i++)
				a*=i;
			for(int i=1; i<=m+n; i++)
				b*=i;
			for(int i=1; i<=n; i++)
				c*=i;
			cout<<b/(a*c)<<endl;
		}
	}
	return 0;
}

