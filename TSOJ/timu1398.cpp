#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int a[520][520];
int main()
{
	int n;
	int i,j,k=0;
	while(cin>>n)
	{
		int m=1;
		a[0][0]=m;
		for(i=1; i<n; i++)
		{
			if(i%2==1)
			{
				k=i;
				for(j=0; j<=i; j++)
				{
					a[j][k]=++m;
				}
				j--;
				for(k=k-1; k>=0; k--)
				{
					a[j][k]=++m;
				}
			}
			else
			{
				j=i;
				for(k=0; k<=i; k++)
				{
					a[j][k]=++m;
				}
				k--;
				for(j=j-1; j>=0; j--)
				{
					a[j][k]=++m;
				}

			}

		}

		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				if(j<n-1)
					cout<<a[i][j]<<" ";
				else
					cout<<a[i][j];
			}
			cout<<endl;
		}
	}
}
