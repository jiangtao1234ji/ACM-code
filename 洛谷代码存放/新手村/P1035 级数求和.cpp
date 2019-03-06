#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	double k;
	int count = 0;
	cin>>k;
	for(double i=1; ; i++)
	{
		k-=(double) 1.0/i;
		count++;
		if(k<0)
			break;
	}
	cout<<count<<endl;
	return 0;
}

