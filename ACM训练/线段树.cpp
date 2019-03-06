#include<iostream>
#include<string>
#include<algorithm>
#define maxn 50100

using namespace std;

int MAX[maxn<<2], MIN[maxn<<2];
int a[maxn];

void PushUp(int rt)
{
	MAX[rt]=max(MAX[rt<<1],MAX[rt<<1|1]);
	MIN[rt]=min(MIN[rt<<1],MIN[rt<<1|1]);
}

void Build(int l,int r,int rt)
{
	if(l==r)
	{
		MAX[rt]=a[l];
		MIN[rt]=a[l];
	}
	else
	{
		int m=(l+r)>>1;
		Build(l,m,rt<<1);
		Build(m+1,r,rt<<1|1);
		PushUp(rt);
	}
}

void Query(int L,int R,int l,int r,int rt, int &mx, int &mn)
{
	if(L<=l&&r<=R)
	{
		mx = max(MAX[rt], mx);
		mn = min(MIN[rt], mn);
		return;
	}
	int m=(r+l)>>1;
	if(L<=m)
		Query(L,R,l,m,rt<<1,mx,mn);
	if(R>m)
		Query(L,R,m+1,r,rt<<1|1,mx,mn);
}


int main()
{
	int n, q;
	scanf("%d%d", &n, &q);
	for(int i=1; i<=n; ++i)
		scanf("%d",&a[i]);
	Build(1,n,1);
	int c, d, mx, mn;
	for(int i=0; i<q; ++i)
	{
		mx = 0, mn = 10000000;
		scanf("%d %d", &c, &d);
		Query(c,d,1,n,1, mx, mn);
		printf("%d\n", mx-mn); 
	}
	return 0;
}

