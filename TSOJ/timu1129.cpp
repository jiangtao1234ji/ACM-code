#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	int x;
	int a[100000], b[100000];
	while(cin>>n>>m)
	{
		int k1=0;
		int k2=0;
		for(int i=0; i<n; ++i)
			for(int j=0; j<m; ++j)
			{
				cin>>x;
				if(x==1)
				{
					a[k1++]=i+1;
					b[k2++]=j+1;
				}
			}
		for(int i=0; i<k1; ++i)
		{
			if(i<k1-1)
				cout<<"("<<a[i]<<","<<b[i]<<")"<<">";
			else
				cout<<"("<<a[i]<<","<<b[i]<<")"<<endl;
		}
	}
	return 0;
}

