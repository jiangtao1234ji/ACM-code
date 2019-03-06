#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int map[6][6];
int ans=100000000;
int dir[4][2]= {0,1,0,-1,-1,0,1,0};
bool vis[6][6];
int starx, stary, endx, endy;

bool checkedge(int x, int y)
{
	if(!vis[x][y]&&x>=0&&x<6&&y>=0&&y<6)
		return 1;
	else
		return 0;
}

void dfs(int x, int y, int sum, int val)
{
	if(sum<ans)
	{
		if(x==endx&&y==endy)
		{
			ans=sum;
			return;
		}
		else
		{
			for(int i=0; i<4; i++)
			{
				if(checkedge(x+dir[i][0],y+dir[i][1]))
				{
					int cost=val*map[x+dir[i][0]][y+dir[i][1]];
					int sum1=sum+cost;
					int val1=cost%4+1;
					vis[x][y]=1;
					dfs(x+dir[i][0] , y+dir[i][1] , sum1 , val1);
					vis[x+dir[i][0]][y+dir[i][1]]=0;
				}
			}
		}
	}
}

int main()
{
	int k;
	cin>>k;
	while(k--)
	{
		for(int i=0; i<6; i++)
			for(int j=0; j<6; j++)
			{
				cin>>map[i][j];
				vis[i][j]=0;
			}
		cin>>starx>>stary>>endx>>endy;
		dfs(starx,stary,0,1);
		cout<<ans<<endl;
	}
	return 0;
}

