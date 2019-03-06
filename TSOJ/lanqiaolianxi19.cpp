#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int a[1000];
int b[1000];
int fun(int n)
{
	if(a[1])
		b[1]=1;
	if(a[2])
		b[2]=b[1]+1;
	for(int i=3; i<=n; i++)
	{
		if(a[i])
		{
			b[i]+=b[i-1];
			b[i]+=b[i-2];
		}
	}
}
int main()
{
	int n, m;
	while(cin>>n>>m)
	{
		memset(a,-1,sizeof(a));
		memset(b,0,sizeof(b));
		int c;
		for(int i=0; i<m; i++)
		{
			cin>>c;
			a[c]=0;
		}
		fun(n);
		cout<<b[n]<<endl;
	}
	return 0;
}

