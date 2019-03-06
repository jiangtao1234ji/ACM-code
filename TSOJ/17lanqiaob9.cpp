#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int max1[100000][100000];
int main()
{
	int n, k, ans=0;
	cin>>n>>k;
	int a[n], b[n];
	memset(max1,0,sizeof(max1));
	for(int i=0; i<n; i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=0; i<n; i++)
	{
		int c=min(a[i],b[i]);
		for(int j=c; j>=0; --j)
			for(int k=1; ; k++)
				if(j*k>c)
				{
					max1[i][j]=k-1;
					break;
				}
	}
	for(int i=c; i>=0; i--)
	{
		for(int j=0; j<n; j++)
		{
			ans+=a[j][i];
		}
		if(ans>=k)
			cout<<i<<endl;
	}
	return 0;
}

