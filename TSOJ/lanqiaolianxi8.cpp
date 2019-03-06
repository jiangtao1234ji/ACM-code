#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//int fun(int n)
//{
//	if(n==1) return sum;
//	return n+fun(n-1);
//}
int fun(int n,int sum)
{
	sum+=n;
	if(n==1)
		return sum;
	if(n>0)
		fun(n-1,sum);
}
int main()
{
	int n;
	while(cin>>n)
	{
		int sum=0;
		cout<<fun(n,sum)<<endl;
	}
	return 0;
}

