#include<iostream>
#include<string>
#include<algorithm>
#define maxn 5100

using namespace std;

struct node
{
	int x, y;
} node[maxn];

int main()
{
	int n, s;
	cin>>n>>s;
	int a, b;
	cin>>a>>b;
	for(int i=0; i<n; i++)
	{
		int x, y;
		cin>>x>>y;
		if(a+b > x)
		{

			node[i].x = x;
			node[i].y = y;
		}
	}
	return 0;
}

