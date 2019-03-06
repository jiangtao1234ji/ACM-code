#include<iostream>
#include<string>
#include<algorithm>
#define maxn 200

using namespace std;

int v[maxn][maxn];

int main()
{
	int n, m;
	while(cin>>n>>m)
	{
		for(int i=0; i<n; ++i)
			for(int j=0; j<n; ++j)
				v[i][j] = 0;
		for(int i=0; i<m; ++i)
		{
			int a, b;
			cin>>a>>b;
			v[a][b] = 1;
		}
		for(int i=1; i<=n; ++i)
		{
			int sum1 = 0;
			for(int j=1; j<=n; ++j)
			{
				if(v[i][j] == 1)
					sum1++;
			}
			cout<<sum1<<" ";
		}
		cout<<endl;
		for(int i=1; i<=n; ++i)
		{
			int sum1 = 0;
			for(int j=1; j<=n; ++j)
			{
				if(v[j][i] == 1)
					sum1++;
			}
			cout<<sum1<<" ";
		}
		cout<<endl;
	}
	return 0;
}

