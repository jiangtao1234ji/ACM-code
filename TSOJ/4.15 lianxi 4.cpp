#include <iostream>

using namespace std;

int n,a[111111],f[111111],maxx;

int main()
{
	while(cin>>n)
	{
		maxx=0;
		for(int i=1; i<=n; i++)
		{
			f[i]=1;
			cin>>a[i];
		}
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<i; j++)
			{
				if(a[i]>a[j]&&f[i]<f[j]+1)
				{
					
					f[i]=f[j]+1;
				}
			}
			maxx=max(maxx,f[i]);
		}
		cout<<maxx<<endl;
	}
	return 0;
}

