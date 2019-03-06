#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#define maxn 200

using namespace std;

char map[maxn][maxn];
int vis[maxn][maxn];
//int dr = {0,-1,0,1,1,0,0,1};
int dx[] = {0,0,-1,1,1,1,-1,-1};
int dy[] = {-1,1,0,0,1,-1,1,-1};
int sign=1;
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

	cin>>n>>m;
	for(int i=0; i<n; ++i)
		for(int j=0; j<m; ++j)
			cin>>map[i][j];

	queue<point> Search;
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<m; ++j)
		{
			if(map[i][j]=='W' && vis[i][j]==0)
				Search.push(point(i,j));
			int kk=0;
			while(!Search.empty())
			{
				kk=1;
				point z=Search.front();
				Search.pop();
				if(map[z.x][z.y]=='W' && vis[z.x][z.y]==0)
				{
					vis[z.x][z.y]=sign;
					for(int k=0; k<8; ++k)
					{
						int x=z.x+dx[k];
						int y=z.y+dy[k];

						if(judge(x,y)==true && map[x][y] =='W' && vis[x][y]==0)
						{
							Search.push(point(x,y));
						}
					}
				}
			}
			sign+=kk;
		}
	}
//for(int i=0;i<n;++i){
//	for(int j=0;j<m;++j){
//		cout<<vis[i]
//	}
//}
	cout<<sign-1<<endl;

	return 0;
}

bool judge(int x,int y)
{
	if(x<0 || x>=n ||y<0 || y>=m)
		return false;
	return true;
}

