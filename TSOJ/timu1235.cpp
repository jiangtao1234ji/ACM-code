#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#define m 8
#define n 8

using namespace std;

int main()
{
	int x=0, y=0;
	vector<vector<int> > v(m);
	for(int i=0; i<m; i++)
		v[i].resize(n);
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>v[i][j];
		}
	}






	return 0;
}
