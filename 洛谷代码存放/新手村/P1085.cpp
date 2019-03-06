#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a, b, sum=0, max=0, maxi;
	for(int i=1; i<=7; ++i)
	{
		cin>>a>>b;
		sum = a+b;
		if(max<sum)
		{
			max = sum;
			maxi = i;
		}
	}
	cout<<maxi<<endl;
	return 0;
}

