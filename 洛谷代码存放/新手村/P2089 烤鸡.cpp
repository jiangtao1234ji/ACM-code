#include<iostream>
#include<string>
#include<algorithm>
#define maxn 51000

using namespace std;

int a[12], b[maxn][12], ans = 0, n;

void dfs(int dep, int sum)
{
	if(dep > 10)
	{
		int num=a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]+a[10];
		if(num == n)
		{
			ans++;
			for(int i=1; i<=10; i++)
				b[ans][i] = a[i];
		}
		return;
	}
	for(int i=1; i<=3; i++)
	{
		if(sum+i>n)
			break;
		a[dep] = i;
		dfs(dep+1, sum+i);
		a[dep] = 0;
	}
}

int main()
{
	cin>>n;
	dfs(1,0);
	cout<<ans<<endl;
	for(int i=1; i<=ans; i++)
	{
		for(int j=1; j<=10; j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

