#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(int a, int b, int c, int d)
{
	if(a==4)
	{
		cout<<"4,5-->9,10"<<endl;
		cout<<"8,9-->4,5"<<endl;
		cout<<"2,3-->8,9"<<endl;
		cout<<"7,8-->2,3"<<endl;
		cout<<"1,2-->7,8"<<endl;
	}
	else
	{
		cout<<a<<","<<b<<"-->"<<c<<","<<d<<endl;
		cout<<c-2<<","<<d-2<<"-->"<<a<<","<<b<<endl;
		fun(a-1,b-1,c-2,d-2);
	}
}
int main()
{
	int n;
	while(cin>>n)
	{
		fun(n, n+1, 2*n+1, 2*n+2);
	}
	return 0;
}

