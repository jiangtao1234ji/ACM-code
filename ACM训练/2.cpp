#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
#define maxn 10

using namespace std;

struct point
{
	int x, y;
};

int vis[maxn][maxn];
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
int main()
{
	int map[][4]= {{1},{2,3},{4,5,6,7},{8}};
	memset(vis,0,sizeof(vis));
	queue<point> q;
	point s;
	s.x = 0;
	s.y = 0;
	q.push(s);
	while(!q.empty())
	{
		point t = q.front();
		cout<<map[t.x][t.y]<<" ";
		q.pop();
		for(int i=0; i<4; ++i)
		{
			int x = t.x + dx[i];
			int y = t.y + dy[i];
			if(x>=0 && x<4 && y>=0 && y<4 && vis[x][y] == 0 && map[x][y] != 0)
			{
				q.push(t);
				vis[x][y] = 1;
			}
		}
	}
	return 0;
}

