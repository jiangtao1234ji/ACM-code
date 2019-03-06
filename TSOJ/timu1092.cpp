#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	long long n, m;
	while(cin>>n)
	{
		long long  a[n][n];
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				cin>>a[i][j];
		cin>>m;
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				a[i][j]+=m*n;
		for(int i=0; i<n; i++)
		{
			for(int j=n-1; j>=0; j--)
			{
				if(j>0)
					cout<<a[i][j]<<" ";
				else
					cout<<a[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}

