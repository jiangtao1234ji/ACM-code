#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int v, n;
	while(cin>>v)
	{
		cin>>n;
		int vi[40], va[40];
		int maxm, maxn=0, tempv=v;
		for(int i=0; i<n; ++i)
		{
			cin>>vi[i]>>va[i];
		}
		for(int i=0; i<n; i++)
		{
			for(int j=i; j<n; j++)
			{
				if(tempv>=vi[j])
				{
					tempv-=vi[j];
					maxm+=va[j];
				}
			}
			tempv=v;
			if(maxn<maxm)
				maxn=maxm;
			maxm=0;
		}
		cout<<maxn<<endl;
	}
	return 0;
}

