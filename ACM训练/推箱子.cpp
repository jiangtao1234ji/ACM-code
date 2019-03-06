#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#define maxn 30

using namespace std;

int dr[][2] = {-1,0,1,0,0,-1,0,1};
char drd[4] = {'N','S','W','E'};
char drx[4] = {'n','s','w','e'};

int map[maxn][maxn], r, c;

struct node
{
	int px, py, bx, by;
	string ans;
} n[2][1000005];

bool bfs(int tx, int ty, node &&cc)
{
	if(tx<-1||tx>r||ty<-1||ty>c||map[tx][ty] == 1)
		return false;
	bool mark[maxn][maxn];
	memset(mark,false,sizeof(mark));
	n[1][1] = cc;
	int st, en;
	st = 1;
	en = 1;
	node a, b;
	bool p = false;
	while(st <= en)
	{
		
	}
}

// 0空地   1墙   3目的地   4箱子   5人 

int main()
{
	int r, c;
	char a;
	while(cin>>r>>c)
	{
		for(int i=0; i<r; ++i)
		{
			for(int j=0; j<c; ++j)
			{
				cin>>a;
				if(a == '#')
					map[i][j] = 1;
				else if(a == '.')
					map[i][j] = 0;
				else if(a == 'T')
					map[i][j] = 3;
				else if(a == 'B')
					map[i][j] = 4;
				else
					map[i][j] = 5;
			}
		}
	}
	return 0;
}

