#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(int m, int n)
{
	if(n==1)
		return 1;
	if(m==0)
		return 1;
	if(n>m)
		return fun(m,m);
	else
		return fun(m,n-1)+fun(m-n,n);

}
int main()
{
	int m, n;
	while(cin>>m>>n)
	{
		cout<<fun(m,n)<<endl;
	}
	return 0;
}

