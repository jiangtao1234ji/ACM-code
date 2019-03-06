#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(int n)
{
	int t;
	while(n)
	{
		t=n%2;
		n/=2;
		cout<<t;
	}
	if(n==32)
		return 0;
	fun(n+1);
}

int main()
{
	fun(0);
	return 0;
}

