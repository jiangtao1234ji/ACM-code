#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int dp[101][101];
int fmin[101][101];
int fmax[101][101];
int main()
{
	int n;
	int a[101];
	while(cin>>n)
	{
		for(int i=1; i<=n; i++)
		{
			cin>>a[i];
			dp[i][1]=a[i];
			fmin[i][1]=0;
		}
		for(int j=2; j<=n; j++)
		{
			for(int i=1; i<=n-j+1; i++)
			{
				dp[i][j]=a[i]+dp[i+1][j-1];
			}
		}
		for(int j=2; j<=n; j++)
		{
			for(int i=1; i<=n-j+1; i++)
			{
				fmin[i][j]=9999;
				for(int k=1; k<=j-1; k++)
				{
					int next=i+k;
					if(fmin[i][j]>dp[i][j]+fmin[next][j-k]+fmin[i][k])
						fmin[i][j]=dp[i][j]+fmin[next][j-k]+fmin[i][k];
				}
			}
		}
		for(int j=2; j<=n; j++)
		{
			for(int i=1; i<=n-j+1; i++)
			{
				fmax[i][j]=9999;
				for(int k=1; k<=j-1; k++)
				{
					int next=i+k;
					if(fmax[i][j]<dp[i][j]+fmax[next][j-k]+fmax[i][k])
						fmax[i][j]=dp[i][j]+fmax[next][j-k]+fmax[i][k];
				}
			}
		}
		cout<<fmax[1][n]<<" "<<fmin[1][n]<<endl;
	}
	return 0;
}

