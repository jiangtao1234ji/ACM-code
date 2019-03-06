#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int a[50];
		a[0]=1;
		a[1]=2;
		for(int i=2; i<n; i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		cout<<a[n-1]<<endl; 
	}
	return 0;
}

