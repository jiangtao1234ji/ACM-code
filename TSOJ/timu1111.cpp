#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int n, k;
	while(cin>>n>>k)
	{
		int a[n+1];
		memset(a,0,sizeof(a));
		for(int i=1; i<=k; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if(j%i==0)
				{
					if(a[j]==0)
						a[j]=1;
					else
						a[j]=0;
				}
			}
		}
		for(int i=1; i<=n; i++)
			if(a[i]==1)
				cout<<i<<endl;
	}
	return 0;
}

