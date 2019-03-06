#include<iostream>
#include<string>
#include<algorithm>
#define maxn 25

using namespace std;

long long vis[maxn][maxn][maxn];

int w(long long a, long long b, long long c)
{
	if(a<=0 || b<=0 || c<=0)
		return 1;
	else if(a>20 || b>20 || c>20)
		return w(20,20,20);
	else if(vis[a][b][c] == 0)
	{
		if(a<b && b<c)
			vis[a][b][c] = w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
		else
			vis[a][b][c] = w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
		return vis[a][b][c];
	}
}

int main()
{
	long long a, b, c;
	while(cin>>a>>b>>c)
	{
		if(a==-1 && b==-1 && c==-1)
			break;
		cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
	}
	return 0;
}

