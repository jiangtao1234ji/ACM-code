#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>

using namespace std;

int LCS(string a, string b)
{
	int m,n;
	m=a.length();
	n=b.length();
	int c[m+1][n+1];
	for(int i=1; i<=m; ++i)
		c[i][0]=0;
	for(int i=0; i<=n; ++i)
		c[0][i]=0;
	for(int i=0; i<=m; ++i)
	{
		for(int j=0; j<=n; ++j)
			c[i][j]=0;
	}
	for(int i=1; i<=m; ++i)
	{
		for(int j=1; j<=n; ++j)
		{
			if(a[i-1]==b[j-1])
				c[i][j]=c[i-1][j-1]+1;
			else if(c[i-1][j]>=c[i][j-1])
				c[i][j]=c[i-1][j];
			else if(c[i-1][j]<c[i][j-1])
				c[i][j]=c[i][j-1];
			for(int i=0; i<=m; ++i)
			{
				for(int j=0; j<=n; ++j)
					cout<<c[i][j];
				cout<<endl;
			}
			cout<<endl<<endl;
		}
	}
	/*for(int i=0; i<=m; ++i)
	{
		for(int j=0; j<=n; ++j)
			cout<<c[i][j];
		cout<<endl;
	}*/
	return c[m][n];
}

int main()
{
	string a;
	string b;
	cin>>a>>b;
	cout<<LCS(a,b)<<endl;
	return 0;
}

