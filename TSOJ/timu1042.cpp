#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string a;
	string b;
	while(cin>>a)
	{
		for(int i=a.size()-5; i<a.size(); i++)
			b+=a[i];
		cout<<"6";
		for(int i=0; i<b.size(); i++)
		{
			if(i<b.size()-1)
				cout<<b[i];
			else
				cout<<b[i]<<endl;
		}
	}
	return 0;
}

