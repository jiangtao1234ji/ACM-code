#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(int n, int count)
{
	if(n%2==0)
	{
		n/=2;
		count++;
		if(n!=1)
			fun(n,count);
		else
			return count;
	}
	else
	{
		n=(3*n+1)/2;
		count++;
		if(n!=1)
			fun(n,count);
		else
			return count;
	}
}
int main()
{
	int n;
	while(cin>>n)
	{
		int count=0;
		cout<<fun(n,count)<<endl;
	}
	return 0;
}

