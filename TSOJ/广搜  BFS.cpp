#include<iostream>
#include<string>
#include<algorithm>
#include<queue>

using namespace std;


//ษ๎หั    DFS     stack
//นใหั    BFS     queue

int main()
{
	int m, n;
	while(cin>>m>>n)
	{
		int now_x=3, now_y=3;
		vector<vector<int> >	v(m);
		for(int i=0; i<m; i++)
			v[i].resize(n);
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<m; j++)
				cin>>v[i][j];
		}
		queue<pair<int,int>> q;
		q.push(make_pair(now_x,now_y))
		V[now_x][now_y]=1;
		
		int count=0;
		while(!q.empty())
		{
			pair<int, int> front=q.front();
			int x=front.first;
			int y=front.second;
			ID=v[x][y]+1;
			if(x!=0&&v[x-1][y]!=-1&&v[x-1][y]==0)
			{
				q.push(make_pair(x-1,y));
				v[x-1][y]=ID;
			}
			if(x!=0&&v[x-1][y]!=-1&&v[x+1][y]==0)
			{
				q.push(make_pair(x+1,y));
				v[x+1][y]=ID;
			}
			if(x!=0&&v[x-1][y]!=-1&&v[x][y+1]==0)
			{
				q.push(make_pair(x,y+1));
				v[x][y+1]=ID;
			}
			if(x!=0&&v[x-1][y]!=-1&&v[x][y-1]==0)
			{
				q.push(make_pair(x,y-1));
				v[x][y-1]=ID;
			}
			q.pop();
		}
	}
	return 0;
}

