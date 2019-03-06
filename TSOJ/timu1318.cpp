#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(int n)
{
	if(n==1||n==2)
		return n;
	if(n>2)
		return (fun(n-1)+fun(n-2));
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

