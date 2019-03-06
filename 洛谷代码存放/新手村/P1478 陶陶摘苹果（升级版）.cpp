#include<iostream>
#include<string>
#include<algorithm>
#define maxn 5100

using namespace std;

struct node
{
	int x, y;
} node[maxn];

bool cmp(struct node a, struct node b)
{
	return a.y < b.y;
}

int main()
{
	int n, s;
	cin>>n>>s;
	int a, b;
	cin>>a>>b;
	int count = 0;
	for(int i=0; i<n; i++)
	{
		int x, y;
		cin>>x>>y;
		if(a + b >= x)
		{
			node[count].x = x;
			node[count].y = y;
			count++;
		}
	}
	sort(node, node+count, cmp);
	int ans = 0;
	for(int i=0; i<count; i++)
	{
		if(s >= node[i].y)
		{
			s-=node[i].y;
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}

