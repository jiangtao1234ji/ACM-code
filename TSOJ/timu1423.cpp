#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int a[100000];
int main()
{
	int n;
	while(cin>>n)
	{
		a[1]=1;
		for(int i=1; i<=n; i++)
		{
			if(i%2==0)
			{
				a[i]=a[i/2]+1;
			}
			else
			{
				a[i]=a[(i+1)/2]+a[(i-1)/2];
			}
		}
		cout<<a[n]<<endl;
		int max=a[1];
		for(int i=1; i<=n; i++)
			if(a[i]>max)
				max=a[i];
		for(int i=1; i<=n; i++)
			if(a[i]==max)
				cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}

