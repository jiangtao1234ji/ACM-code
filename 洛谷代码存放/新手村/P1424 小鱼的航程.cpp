#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	long long x,n;
	cin>>x>>n;
	long long sum = 0;
	for(int i=0; i<n; ++i)
	{
		if(x%7 == 0 || x%7 == 6)
		{
			if(x%7 == 0)
				x%=7;
			x++;
		}
		else
		{
			sum+=250;
			x++;
		}
	}
	cout<<sum<<endl;
	return 0;
}

