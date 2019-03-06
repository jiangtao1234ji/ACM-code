#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10010

using namespace std;

int l, m, t[maxn];

void add(int x, int y)
{
	if(!x)
		return;
	for(; x<=l+1; x+=x&-x)
		t[x]+=y;
}


int query(int x)
{
	int s=0;
	for(; x; x-=x&-x)
		s+=t[x];
	return s;
}

int main()
{

	cin>>l>>m;
	while(m--)
	{
		int a, b;
		cin>>a>>b;
		add(x+1,1);
		add(y+2,-1);
	}
	return 0;
}

