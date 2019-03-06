#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int t;
	while(cin>>t)
	{
		for(int i; i<t; i++)
		{
			int n;
			cin>>n;
			int a[n];
			for(int j=0; j<n; j++ )
			{
				cin>>a[j];
			}
			sort(a,a+n);
			int d[100], x;
			for(int j=0; j<n; j++ )
			{
				d[j]=abs(abs(a[j]-a[n-1])-abs(a[j]-a[0]));
			}
			int temp;
			temp=d[0];
			for(int j=0; j<n; j++ )
			{
				if(temp>d[j])
				{
					temp=d[j];
					x=j;
				}
			}
			cout<<a[x]<<endl;
		}
	}
	return 0;
}

