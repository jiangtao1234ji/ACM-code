#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int move(int n)
{
	if(n==4)
	{
		cout<<"4,5-->9,10"<<endl;
		cout<<"8,9-->4,5"<<endl;
		cout<<"2,3-->8,9"<<endl;
		cout<<"7,8-->2,3"<<endl;
		cout<<"1,2-->7,8"<<endl;
	}
	else
	{
		cout<<n<<","<<n+1<<"-->"<<2*n+1<<","<<2*n+2<<endl;
		cout<<2*n-1<<","<<2*n<<"-->"<<n<<","<<n+1<<endl;
		move(n-1);
	}
}
int main()
{
	int n;
	while(cin>>n)
	{
		move(n);
	}
	return 0;
}


