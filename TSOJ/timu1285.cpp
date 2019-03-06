#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else if(n==3)
		return 2;
	else if(n==4)
		return 2;
	else
		return fun(n-2)+2*fun(n-3)+fun(n-4);
	
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

