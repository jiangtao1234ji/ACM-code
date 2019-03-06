#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n%2 == 0 || n==1)
			printf("2^? mod %lld = 1\n",n);
		else
		{
			int ans = 1, t=2;
			while(t%n != 1)
			{
				t = (t*2) % n;
				ans++;
			}
			printf("2^%lld mod %lld = 1\n",ans,n);
		}
	}
}

