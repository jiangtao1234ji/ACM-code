#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	string a;
	cin>>a;
	if(a[0] == '-')
	{
		reverse(a.begin()+1, a.end());
		int flag = 0;
		cout<<'-';
		for(int i=1; i<a.length(); i++)
		{
			if(a[i] != '0'&& !flag)
				flag = 1;
			if(flag)
				cout<<a[i];
		}
		cout<<endl;
	}
	else
	{
		reverse(a.begin(), a.end());
		int flag = 0;
		for(int i=0; i<a.length(); i++)
		{
			if(a[i] != '0'&& !flag)
				flag = 1;
			if(flag)
				cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}

