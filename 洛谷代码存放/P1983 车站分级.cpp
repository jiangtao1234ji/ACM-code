#include<iostream>
#include<string>
#include<algorithm>
#define maxn 1100

using namespace std;

int map[maxn][maxn];

int main()
{
	int n, m;
	cin>>n>>m;
	for(int i=0; i<m; i++)
	{
		int k;
		cin>>k;
		int bg;
		for(int j=0; j<k; j++)
		{
			int a;
			cin>>a;
			if(!j)
				bg = a;
			if(j)
				map[bg][a] = 1;
		}
		
	}
	return 0;
}

