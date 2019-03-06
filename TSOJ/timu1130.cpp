#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	string t;
	while(cin>>s>>t)
	{
		int a=0, i=0, count=0;
		for(i=0; i<t.length(); i++)
		{
			if(s[a]==t[i])
			{
				a++;
				count++;
			}
		}
		if(count==s.length())
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
