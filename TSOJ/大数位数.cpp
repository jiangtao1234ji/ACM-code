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
		double sum=0.0;
		for(int i=1; i<=n; i++)
		{
			sum+=log10(i);
		}
		if(n==1)
			sum=1;
		cout<<(int)ceil(sum)<<endl;
	}
	return 0;
}

