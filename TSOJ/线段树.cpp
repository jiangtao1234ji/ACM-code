#include<iostream>
#include<string>
#include<algorithm>
#define maxn 50100

using namespace std;

int MAX[maxn<<2], MIN[maxn<<2];
int a[maxn];

void PushUp(int rt,int l, int r)
{
	MAX[rt]=max(MAX[l],MAX[r]);
	MIN[rt]=min(MIN[l],MIN[r]);
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

int Query(int L,int R,int l,int r,int rt)
{
	if(L<=l&&r<=R)
		return MAX[rt];
	int m=(r+l)>>1;
	int ret=0;
	if(L<=m)
		ret=max(ret,Query(L,R,l,m,rt<<1));
	if(R>m)
		ret=max(ret,Query(L,R,m+1,r,(rt<<1)+1));
	return ret;
}

int Query1(int L,int R,int l,int r,int rt)
{
	if(L<=l&&r<=R)
		return MIN[rt];
	int m=(r+l)>>1;
	int ret=10000000;
	if(L<=m)
		ret=min(ret,Query1(L,R,l,m,rt<<1));
	if(R>m)
		ret=min(ret,Query1(L,R,m+1,r,(rt<<1)+1));
	return ret;
}

int main()
{
	int n, q;
	cin>>n>>q;
	for(int i=0; i<n; ++i)
		cin>>a[i];
	Build(1,n,1);
	int c, d;
	for(int i=0; i<q; ++i)
	{
		cin>>c>>d;
		//cout<<Query(c,d,1,n,1)-Query1(c,d,1,n,1)<<endl;
		cout<<Query(c,d,1,n,1)<<endl;
		cout<<Query1(c,d,1,n,1)<<endl;
	}
	return 0;
}

