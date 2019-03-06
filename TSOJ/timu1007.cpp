#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int gcd(int a, int b)
{
	if(b > a)
		swap(a,b);
	if(a == 0)
		return b;
	else if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main()
{
	int n, a, b, c;
	while(cin>>n)
	{
		for(int i=0; i<n; ++i)
		{
			cin>>a>>b>>c;
			cout<<gcd(a,gcd(b,c))<<endl;;
		}
	}
	return 0;
}

