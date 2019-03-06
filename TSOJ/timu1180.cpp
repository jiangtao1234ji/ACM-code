#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		int a[n];
		int sum=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		sum+=a[0]*6;
		for(int i=1; i<n; i++)
		{
			if(a[i-1]<a[i])
				sum+=(a[i]-a[i-1])*6;
			else if(a[i-1]==a[i])
				continue;
			else
				sum+=(a[i-1]-a[i])*4;
		}
		sum+=n*5;
		cout<<sum<<endl;
	}
	return 0;
}

