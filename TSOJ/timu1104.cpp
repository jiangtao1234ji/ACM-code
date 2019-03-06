#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		long long  a=1, b=2, s=0;
		for(int i=1; i<n; i++)
		{
			s=a;
			a=b;
			b=s+b;
		}
		if(n%2==1)
			cout<<b<<"/"<<a<<endl;
		else
			cout<<"-"<<b<<"/"<<a<<endl;
			
	}
	return 0;
}

