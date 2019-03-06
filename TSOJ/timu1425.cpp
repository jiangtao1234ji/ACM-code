#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(int n, int y, int m, int count)
{
	int k;
	if(y%n==m)
		k=(y-m)/n;
	else
		return 1;
	y-=k;
	count++;
	if(count<n)
		fun(n, y, m, count);
	else
		return y;
}
int main()
{
	int n, m;
	while(cin>>n>>m)
	{
		int k=n-1;
		for(int i=n+m;; i+=n)
		{
			int a=fun(n, i, m, 0);
			if(a==1)
				continue;
			if(a%n==m)
			{
				cout<<i-m*n<<endl;
				cout<<(a-m)/n-m<<endl;
				break;
			}
		}
	}
	return 0;
}

