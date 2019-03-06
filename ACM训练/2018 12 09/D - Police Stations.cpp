#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#define maxn 300100

using namespace std;

struct point{
	int v, id;
	point(int v, int id):v(v), id(id){
	}
	point(){
	}
};

int edge[maxn], vis[maxn];
queue<int> q;
vector<point> v[maxn];

int bfs()
{
	int ans= 0;
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		for(int i=0; i<v[u].size(); i++)
		{
			point n = v[u][i];
			if(edge[n.id])
				continue;
			if(vis[n.v])
			{
				edge[n.id] = 2;
				ans++;
				continue;
			}
			vis[n.v] = 1;
			edge[n.id] = 1;
			q.push(n.v);
		}
	}
	return ans;
}


int main()
{
	int n, k, d;
	cin>>n>>k>>d;
	int m;
	for(int i=0; i<k; i++)
	{
		scanf("%d", &m);
		vis[m] = 1;
		q.push(m);
	}
	int x, y;
	for(int i=0; i<n-1; i++)
	{
		scanf("%d%d", &x, &y);
		v[x].push_back(point(y,i));
		v[y].push_back(point(x,i));
	}
	cout<<bfs()<<endl;
	for(int i=0; i<n-1; i++)
	{
		if(edge[i] == 2)	
			printf("%d ", i+1);
	}
	cout<<endl;
	return 0;
}

