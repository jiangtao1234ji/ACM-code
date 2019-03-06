#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int result;
		if(n==1)
			cout<<"3"<<endl;
		else
		{
			result=2*(pow(2,n-1)+pow(-1,n-2));
			cout<<result<<endl;
		}
	}
	return 0;
}

