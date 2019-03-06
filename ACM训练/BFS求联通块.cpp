#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include <cstring>
#define maxn 25

using namespace std;

char map[maxn][maxn];
//int dr = {0,-1,0,1,1,0,0,1};
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};
int sign=0;
int n, m;
class point
{
	public:
		int x;
		int y;
		point()
		{
		}
		point(int x,int y):x(x),y(y)
		{
		}
};

bool judge(int x,int y);

int main()
{

	while(cin>>m>>n)
	{
		if(m==0 && n==0) break;
		queue<point> Search;
		for(int i=0; i<n; ++i)
		{
			for(int j=0; j<m; ++j)
			{
				cin>>map[i][j];
				if(map[i][j]=='@')
				{
					point man(i,j);
					Search.push(man);
					map[i][j]='#';
				}
			}
		}

		while(!Search.empty())
		{

			point z=Search.front();
			Search.pop();
			sign++;
			for(int k=0; k<4; ++k)
			{
				int x=z.x+dx[k];
				int y=z.y+dy[k];

				if(judge(x,y)==true && map[x][y] != '#')
				{
					map[x][y] = '#';
					Search.push(point(x,y));
				}
			}
		}
		cout<<sign<<endl;
		sign=0;
	}

	return 0;
}

bool judge(int x,int y)
{
	if(x<0 || x>=n || y<0 || y>=m)
		return false;
	return true;
}

