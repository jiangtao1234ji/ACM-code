#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	while(cin>>n>>m)
	{
		if(m%2==0)
		{
			if(n%2==0)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
		else
		{
			if(n%2==0)
			{
				if((n/m)%2==0)
					cout<<"Yes"<<endl;
				else
					cout<<"No"<<endl;
			}
			else
				cout<<"No"<<endl;
		}
	}
	return 0;
}

