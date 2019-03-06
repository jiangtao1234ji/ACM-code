#include<iostream>
#include<string>
#include<algorithm>
#define maxn 100

using namespace std;

struct arcnode
{
	int wt;
	int adjvex;
	arcnode *nextarc;
}*Arc;


struct headNode
{
	string data;
	arcnode *firstarc;
};

struct graph
{
	headNode *vex;
	int vexnum, arcnum;
} *Graph;

void createGraph(graph & g, int **edge)
{
	for(int i=0; i<g.arcnum; i++)
	{
		arcnode *next = new arcnode;
		next->adjvex = edge[i][1] - 1;
		next->nextarc = NULL;
		if(g.vex[edge[i][0]-1].firstarc == NULL)
			g.vex[edge[i][0]-1].firstarc = next;
		else
		{
			arcnode *n;
			n = g.vex[edge[i][0]-1].firstarc;
			while(n->nextarc)
				n = n->nextarc;
			n->nextarc = next;
		}
	}
}

void print(graph g)
{
	for(int i=0; i<g.arcnum; i++)
	{
		cout<<g.vex[i].data<<" ";
		arcnode *n;
		n = g.vex[i].firstarc;
		while(n)
		{
			cout<<n->adjvex<<" ";
			n = n->nextarc;
		}
		cout<<endl;
	}
}

void dfs(graph g, int v, bool *& vis)
{
	cout<<g.vex[v].data<<" ";
	vis[v] = true;
	arcnode  *n = g.vex[v].firstarc;
	whiel(n)
	{
		if(!vis[n->nextarc])
			dfs(g,n->nextarc,vis);
		else
			n = n->nextarc;
	}
}

void DFS(graph g, int k)
{
	bool *vis = new bool[g.vexnum];
	for(int i=0; i<g.vexnum; i++)
		vis[i] = false;
	cout<<"图DFS的遍历结果:"<<endl;
	dfs(g, k - 1, vis);
	for(int i=0; i<g.vexnum; i++)
		if(!vis[i])
			dfs(g, i, vis);
}

int main()
{
	graph g;
	cout << "输入图的顶点个数和边数:" << endl;
	cin >> g.vexnum>>g.arcnum;
	g.vex = new headNode[g.vexnum];
	cout<<"输入顶点名称:"<<endl;
	for(int i=0; i<g.vexnum; i++)
	{
		cin>>g.vex[i].data;
		g.vex[i].firstarc = NULL;
	}
	int ** edge_information;
	edge_information = new int*[g.edge];

	cout << "输入每条边两个顶点的编号：" << endl;
	for (i = 0; i < g.edge; i++)
	{
		edge_information[i] = new int[2];
		cin >> edge_information[i][0];
		cin >> edge_information[i][1];
	}

	return 0;
}

