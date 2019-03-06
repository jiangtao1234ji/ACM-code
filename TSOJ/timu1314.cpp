#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int a[n+1][n+1];
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				a[i][j]=0;
			}
		}
		if(n%2==1)
		{
			int mid=(n+1)/2;
			for(int i=0; i<mid; i++)
			{
				a[mid-i][mid-i]=1;
				a[mid-i][mid+i]=1;
				a[mid+i][mid-i]=1;
				a[mid+i][mid+i]=1;
				if(i>0)
				{
					for(int j=mid-i+1; j<mid+i; j++)
					{
						a[mid-i][j]=0;
						a[mid+i][j]=2;
						a[j][mid-i]=3;
						a[j][mid+i]=4;
					}
				}
			}
		}
		else
		{
			int mid1=n/2;
			int mid2=mid1+1;
			for(int i=0; i<mid1; i++)
			{
				a[mid1-i][mid1-i]=1;
				a[mid1-i][mid1+i+1]=1;
				a[mid2+i][mid2-i-1]=1;
				a[mid2+i][mid2+i]=1;
				if(i>0)
				{
					for(int j=mid1-i+1; j<mid2+i; j++)
					{
						a[mid1-i][j]=0;
						a[mid2+i][j]=2;
						a[j][mid1-i]=3;
						a[j][mid2+i]=4;
					}
				}
			}
		}
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if(j<n)
					cout<<a[i][j]<<" ";
				else
					cout<<a[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}

