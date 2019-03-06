#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	char c;
	while(cin>>n>>c)
	{
		if(c=='A')
		{
			if(n<=2)
			{
				cout<<"A win!"<<endl;
			}
			else if((n-1)%3==0)
			{
				cout<<"A win!"<<endl;
			}
			else if((n-2)%3==0)
			{
				cout<<"A win!"<<endl;
			}
			else
			{
				cout<<"B win!"<<endl;
			}
		}
		else
		{
			if(n<=2)
			{
				cout<<"B win!"<<endl;
			}
			else if((n-1)%3==0)
			{
				cout<<"B win!"<<endl;
			}
			else if((n-2)%3==0)
			{
				cout<<"B win!"<<endl;
			}
			else
			{
				cout<<"A win!"<<endl;
			}
		}
	}
}
