#include <iostream>
#define MAXNUM 100
unsigned  long ww[MAXNUM*11][MAXNUM*11];

using namespace std;

unsigned long fun(int n, int max)
{
	for(int i=1; i<=n; i++)
		for(int j=1; j<=i; j++)
		{
			if(j==1|| i==1)
			{
				ww[i][j]=1;
			}
			else
			{
				if(j==i)
					ww[i][j]=ww[i][j-1]+1;
				else if((i-j)<j)
					ww[i][j]=ww[i-j][i-j]+ww[i][j-1];
				else
					ww[i][j]=ww[i-j][j]+ww[i][j-1];
			}
		}
	return ww[n][max];
}
int main()
{
	int n;
	while(cin>>n)
	{
		cout<<fun(n,n)-1<<endl;
	}

	return 0;
}
