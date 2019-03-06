#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	int t, b;
	while(cin>>n)
	{
		while(n--)
		{
			long long a=0;
			cin>>t;
			for(int i=0; i<t; i++)
			{
				cin>>b;
				a+=b;
			}
			cout<<a<<endl;
			cout<<endl;
		}
	}
	return 0;
}

