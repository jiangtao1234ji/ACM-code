#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

long long a[10500],b[10500],c[10500];
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(int i=0; i<n; i++)
		{
			cin>>b[i];
		}
		for(int i=0; i<n; i++)
		{
			cin>>c[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		sort(c,c+n);
		int flag=0,temp=0;
		long long ans=0;
		for(int i=0; i<n; i++)
		{
			for(int j=temp; j<n; j++)
			{
				if(b[j]>a[i])
				{
					if(!flag)
					{
						temp=j;
						flag=1;
					}
					ans+=c+n-upper_bound(c,c+n,c[j]);
				}
			}
			flag=0;
		}
		cout<<ans<<endl;
	}
	return 0;
}
