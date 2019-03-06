#include<iostream>
#include<string>
#include<algorithm>
#include<list>
#include<queue>

using namespace std;

class Graph
{
	int V;
	list<int>	*adj;
	queue<int> q;
	int* indegree;
public:
	Graph(int V);
	~Graph();
	void addEdge(int v, int t);
	bool topological_sort();
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
	
	indegree = new int[V];
	for(int i=0; i<V; ++i)
		indegree[i] = 0;
}

Graph::~Graph()
{
	delete [] adj;
	delete [] indegree;
}

void Graph::addEdge(int v, int t)
{
	adj[v].push_back(t);
	++indegree[t];
}

bool Graph::topological_sort()
{
	for(int i=0; i<V; ++i)
		if(indegree[i] == 0)
			q.push(i);
	int count = 0;
	while(!q.empty())
	{
		int v = q.front();
		q.pop();
		
		if(count<V)
			cout<<v<<" ";
		else
			cout<<v;
		++count;
		
		list<int>::iterator it = adj[v].begin();
		for(; it != adj[v].end(); ++it)
			if(--indegree[*it] == 1)
				q.push(*it);
	}
	
	if(count<V)
		return false;
	else
		return true;
}
int main()
{
	int n, m;
	while(cin>>n>>m)
	{
		Graph g(n);
		for(int i=0; i<m; i++)
		{
			int v, t;
			cin>>v>>t;
			g.addEdge(v,t);
		}
		g.topological_sort();
	}
	return 0;
}

