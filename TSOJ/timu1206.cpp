#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
	string a;
	while(getline(cin,a))
	{
		int c=0;
		char b;
		cin>>b;
		int count=0;
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]==b)
				count++;
		}
		cout<<count<<endl;
		getchar();
	}
	return 0;
}

