#include <iostream>
using namespace std;
#define M 101
#define INF 1000000000
#define ING 0
int n,fmax[M][M],fmin[M][M],sum[M][M],stone[M];
int main()
{
	int i,j,k,t;
	while(cin>>n)
	{
		for(i=1; i<=n; i++)
			scanf("%d",&stone[i]);

		for(i=1; i<=n; i++)
		{
			fmax[i][i]=0;
			fmin[i][i]=0;
			sum[i][i]=stone[i];
			for(j=i+1; j<=n; j++)
				sum[i][j]=sum[i][j-1]+stone[j];
		}

		for(int len=2; len<=n; len++)
		{
			for(i=1; i<=n-len+1; i++)
			{
				j=i+len-1;
				fmin[i][j]=INF;
				for(k=i; k<=j-1; k++)
				{
					if(fmin[i][j]>fmin[i][k]+fmin[k+1][j]+sum[i][j])
						fmin[i][j]=fmin[i][k]+fmin[k+1][j]+sum[i][j];
				}
			}
		}
		for(int len=2; len<=n; len++)
		{
			for(i=1; i<=n-len+1; i++)
			{
				j=i+len-1;
				fmax[i][j]=ING;
				for(k=i; k<=j-1; k++)
				{
					if(fmax[i][j]<fmax[i][k]+fmax[k+1][j]+sum[i][j])
						fmax[i][j]=fmax[i][k]+fmax[k+1][j]+sum[i][j];
				}
			}
		}
		cout<<fmax[1][n]<<" "<<fmin[1][n]<<endl;
	}
	return 0;
}
