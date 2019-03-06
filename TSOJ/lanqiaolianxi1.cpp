#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(int n, int count)
{
	if(n%2==1)
	{
		n=3*n+1;
		count++;
	}
	else
	{
		n/=2;
		count++;
	}
	if(n==1)
		return count;
	fun(n,count);
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

