#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int m, n;
	while(cin>>m>>n)
	{
		int b=(n-2*m)/2;
		int a=m-b;
		int z=2*a+4*b;
		if(a<0||b<0||z!=n)
			cout<<"-1"<<" "<<"-1"<<endl;
		else
			cout<<a<<" "<<b<<endl;
	}
	return 0;
}

