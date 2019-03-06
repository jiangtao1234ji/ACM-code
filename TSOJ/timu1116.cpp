#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		string a;
		string b;
		getchar();
		while(n--)
		{
			getline(cin,a);
			for(int i=a.size()-1; i>=0; i--)
			{
				b+=a[i];
			}
			for(int i=0; i<b.size(); i++)
				cout<<b[i];
			cout<<endl;
			b="";
		}
	}
	return 0;
}
