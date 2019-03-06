#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(int a, int b)
{
	if(b==a)
	{
		for(int i=a; i>0; i--)
		{
			if(i!=1)
				cout<<i<<" ";
			else
				cout<<i<<endl;
		}
	}
	else if(a<b&&a>0)
	{
		for(int i=b-a; i>0; i--)
			cout<<a<<" ";
		for(int i=a; i>0; i--)
		{
			if(i!=1)
				cout<<i<<" ";
			else
				cout<<i<<endl;
		}
	}
	else
		return 0;
	fun(a-1,b);
}
int main()
{
	int n;
	while(cin>>n)
	{
		fun(n,n);
	}
	return 0;
}

