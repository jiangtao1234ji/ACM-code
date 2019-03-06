#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int k, m;
	while(cin>>k>>m)
	{
		long long a=1, b=1, c=1;
		if(k==0)
			cout<<"1"<<endl;
		else
		{
			for(int i=1; i<=m; i++)
				a*=i;
			for(int i=1; i<=k; i++)
				b*=i;
			for(int i=1; i<=m-k; i++)
				c*=i;
			cout<<a/(b*c)<<endl;
		}
	}
	return 0;
}

