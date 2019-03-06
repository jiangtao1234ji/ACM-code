#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#define maxn 1000000

using namespace std;

long long ans[maxn];

long long gcd(long long a,long long b)
{
	if(a%b==0)
		return b;
	else
		return gcd(b,a%b);
}

int main()
{
	long long a, b, c;
	cin>>a>>b;
	c = gcd(a,b);
	if(c == 1)
		cout<<"1"<<endl;
	else
	{
		long long k = 1;
		ans[0] = 1;
		if(c != a && c != b)
		{
			ans[k++] = c;
		}
		if(c == a)
			ans[k++] = a;
		if(c == b)
			ans[k++] = b;
		int l = (int)sqrt(c);
		for(int i=2; i<=l; i++)
		{
			if(l%i == 0)
			{
				ans[k++] = i;
				ans[k++] = c/i;
			}
		}
		sort(ans, ans+k);
		ans[k] = -1;
		for(int i=0; i<k; i++)
		{
			if(ans[i]!=ans[i+1])
				cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

