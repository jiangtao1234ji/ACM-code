#include <iostream>
#include <stdlib.h>
#include<vector>
#define MAX 1010
#define inf 99999999

using namespace std;

vector<int> p;
int m[MAX][MAX];
int s[MAX][MAX];
int n;
void matrix()
{
	int i,j,k;
	for(i=0; i<n; i++)
		m[i][i]=0;
	for(i=2; i<=n; i++)
		for(j=0; j<n-i+1; j++)
		{
			m[j][j+i-1]=inf;
			for(k=0; k<i-1; k++)
			{
				if(m[j][j+i-1]>m[j][j+k]+m[j+k+1][j+i-1]+p[j]*p[j+k+1]*p[j+i])
				{
					m[j][j+i-1]=m[j][j+k]+m[j+k+1][j+i-1]+p[j]*p[j+k+1]*p[j+i];
					s[j][j+i-1]=k;
				}
			}
		}
	cout<<m[0][n]<<endl;
}

int main()
{
	int n;
	while(cin>>n)
	{
		int b, c;
		for(int i=0; i<n; i++)
		{
			cin>>b>>c;
			p.push_back(b);
			p.push_back(c);
		}
		int count=0;
		for(int i=0; i<p.size(); ++i)
		{
			for(int j=i+1; j<p.size(); ++j)
			{
				if(p[i] == p[j])
					count++;
			}
		}
		if(2*count >= 2*n - 2)
		{
			for(int i=0; i<p.size(); ++i)
			{
				for(int j=i+1; j<p.size(); ++j)
				{
					if(p[i] == p[j])
						p.erase(p.begin()+j);
				}
			}
			matrix();
		}
		else
			cout<<"invalid argument"<<endl;
		count=0;
		p.clear();
	}
	return 0;
}

