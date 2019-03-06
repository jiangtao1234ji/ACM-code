#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int dx[]= {0,0,-1,1};
int dy[]= {1,-1,0,0};
int a[7][7]={0};
int ans=0;
void dfs(int x, int y)
{
	if(x==0||y==0||x==6||y==6)
	{
		++ans;
		return;
	}
	for(int i=0; i<4; i++)
	{
		int nx=x+dx[i], ny=y+dy[i];
		if(a[nx][ny]==0)
		{
			int dx=6-nx, dy=6-ny;
			a[nx][ny]=a[dx][dy]=1;
			dfs(nx,ny);
			a[nx][ny]=a[dx][dy]=0;
		}
	}
}
int main()
{
	a[3][3]=1;
	dfs(3,3);
	cout<<ans/4<<endl;
	return 0;
}

