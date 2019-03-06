#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	long long f[1000];
	int n,m,i;
	while(cin>>n>>m)
	{
		int k=n-1;
		f[1]=n-1-m;
		while(i<=(n+1))
		{
			double g=(f[i-1]*n+m)*1.0/(n-1);
			if (floor(g)==g)
			{
				f[i]=g;
				i++;
			}
			else
			{
				f[1]+=k;
				i=2;
			}
		}
		cout<<(int)f[n+1]*n+m<<endl;
		cout<<(int)(f[2]*(n-1))/n<<endl;
	}
	return 0;
}

