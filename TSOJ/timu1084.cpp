#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, b;
	while(cin>>n)
	{
		if(n==0)
			break;
		long long a=0;
		for(int i=0; i<n; i++)
		{
			cin>>b;
			a+=b;
		}
		cout<<a<<endl;
	}
	return 0;
}

