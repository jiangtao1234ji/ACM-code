#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n, i, sum=0;
	int a[1000];
	while(cin>>n)
	{
		for(i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(i=0; i<n; i++)
		{
			sum+=a[i];
		}
		if(sum>=25)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		sum=0;
	}
}
