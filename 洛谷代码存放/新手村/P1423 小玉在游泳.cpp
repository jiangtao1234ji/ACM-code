#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	double x;
	cin>>x;
	int count = 0;
	for(double i = 2; ; i*=0.98)
	{
		x-=i;
		count++;
		if(x<=0)
			break;
	}
	cout<<count<<endl;
	return 0;
}

