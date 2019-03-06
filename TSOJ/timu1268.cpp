#include <iostream>

using namespace std;

int fun(int n, int a[])
{
	if(count==n)
	{
		int temp=a[0];
		for(int i=0; i<n; i++)
		{
			if(temp<a[i])
				temp=a[i];
		}
		cout<<temp<<endl;
	}
	else
	{
		for(int i=0; i<n; i++)
		{
			sum+=a[i];
			if(sum>=maxx)
				maxx=sum;
			else
			{
				i++;
				sum=a[i];
			}
		}
	}
}
int main()
{
	int n;
	while(cin >> n)
	{
		int sum=0, maxx=0, num=0;
		int a[10000];
		int count=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			if(a[i]<0)
				count++;
		}
		fun(n);
		cout<<maxx<<endl;
	}
	return 0;
}
