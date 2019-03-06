#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	long long int a[10005], b[10005], c[10005];
	int m[10005];
	while(cin>>n)
	{
		for(int i=1; i<=n; i++)
		{
			cin>>a[i]>>b[i]>>c[i];
			m[i]=i;
		}
		for(int i=2; i<=n; i++)
		{
			for(int j=2; j<=n; j++)
			{
				if((a[i-1]+b[i-1])*(c[i]+b[i]+a[i])>(a[i]+b[i])*(c[i-1]+b[i-1]+a[i-1]))
				{
					swap(m[i],m[i-1]);
					swap(a[i-1],a[i]);
					swap(b[i-1],b[i]);
					swap(c[i-1],c[i]);
			 	}
				else if((a[i-1]+b[i-1])*(c[i]+b[i]+a[i])==(a[i]+b[i])*(c[i-1]+b[i-1]+a[i-1]))
				{
					if(m[i-1]>m[i])
						swap(m[i-1],m[i]);
				}
			}
		}
		for(int i=1; i<=n; i++)
		{
			if(i<n)
				cout<<m[i]<<" ";
			else
				cout<<m[i]<<endl;
		}
	}
	return 0;
}

