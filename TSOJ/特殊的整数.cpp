#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	long long n;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int count=0;
		cin>>n;
		for(int j=2; j<n; j+=2)
		{
			if(n%j==0)
			{
				int k=n/j;
				if(k%2==1)
				{
					cout<<k<<" "<<j<<endl;
					count++;
					break;
				}
			}
		}
		if(count==0)
			cout<<"No"<<endl;
		
	}
	return 0;
}

