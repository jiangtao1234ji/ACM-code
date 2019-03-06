#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(int n)
{
	if(n==1)
		return 2;
	else
		return fun(n-1)+2*(n-1);
}
int main()
{
	int n;
	while(cin>>n)
	{
		cout<<fun(n)<<endl;
	}
	return 0;
}

