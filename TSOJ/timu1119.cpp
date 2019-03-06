#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

long fun(long v, int base)
{
	long ans, weight;
	int digit;
	ans = 0;
	weight = 1;
	while(v)
	{
		digit = v % 10;
		v /= 10;
		if(digit >= base)
		{
			ans = -1;
			break;
		}
		ans += weight * digit;
		weight *= base;
	}
	return ans;
}

int main()
{
	int t;
	long p, q, r;
	long p2, q2, r2;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>p>>q>>r;
			int ans = 0;
			for(int i=2; i<16; i++)
			{
				p2 = fun(p, i);
				if(p2 < 0)
				{
					ans = 0;
					continue;
				}
				q2 = fun(q, i);
				if(q2 < 0)
				{
					ans = 0;
					continue;
				}
				r2 = fun(r, i);
				if(r2 < 0)
				{
					ans = 0;
					continue;
				}
				if(p2 * q2 == r2)
				{
					ans = i;
					break;
				}
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}
