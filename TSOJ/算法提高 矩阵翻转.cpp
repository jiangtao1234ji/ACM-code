#include<iostream>
#include<cmath>
#include<algorithm>
#define maxn 100
#define INF_MIN 0xc0c0c0c0
#define INF_MAX 0x3f3f3f3f

using namespace std;

int arr[maxn][maxn];
int x, n, ans=INF_MIN;

void getMax()
{
	int maxx = 0;
	int temp1, temp2;
	for(int i=0; i<n; i++)
		maxx += arr[x-1][i];
	for(int i=0; i<x-1; i++)
	{
		temp1 = INF_MIN;
		temp2 = arr[i][x-1]+arr[i+x][x-1];
		for(int j=0; j<x-1; j++)
			temp2 += abs(arr[i][j]+arr[i][j+x]+arr[i+x][j]+arr[i+x][j+x]);
		temp1 = max(temp1, temp2);
		temp2 = -1*(arr[i][x-1]+arr[i+x][x-1]);
		for(int j=0; j<x-1; j++)
			temp2 += abs((-1)*arr[i][j]+arr[i][j+x]+(-1)*arr[i+x][j]+arr[i+x][j+x]);
		temp1 = max(temp1, temp2);
		maxx += temp1;
	}
	ans = max(maxx,ans);
}

void fun()
{
	for(int k=0; k<(1<<x-1); k++)
	{
		for(int j=0; j<x-1; j++)
		{
			if(k&(1<<j)!=0)
			{
				for(int i=0; i<x; i++)
				{
					arr[i][j]*=-1;
					arr[i][j+x]*=-1;
				}
			}
		}
		getMax();
		for(int j=0; j<x-1; j++)
		{
			if(k&(1<<j) != 0)
			{
				for(int i=0; i<x; i++)
				{
					arr[i][j]*=-1;
					arr[i][j+x]*=-1;
				}
			}
		}
	}
}

int main()
{
	while(cin>>n)
	{

		x = (n+1)/2;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin>>arr[i][j];
			}
		}
		fun();
		cout<<ans<<endl;
	}
	return 0;
}

