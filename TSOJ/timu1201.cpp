#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(int n, int m)
{
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
			if(n%(m-i)==0)
				return i>(m-i)?(m-i):i;		
	}
	return -1;
}
int main()
{
	int k;
	while(cin>>k)
	{
		for(int i=0; i<k; i++)
		{
			int n, m, result;
			cin>>n>>m;
			result=fun(n,m);
			cout<<result<<endl;
		}
	}
	return 0;
}

