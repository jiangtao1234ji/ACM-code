#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	string s;
	cin>>s;
	int ls = s.length();
	int a = 1, l, flag = 0;
	for(int i=0; i<ls; i++)
	{
		if(s[i] == '.')
			a = 2;
		if(s[i] == '/')
			a = 3;
		if(s[i] == '%')
			a = 4;
	}
	if(a == 1)
	{
		reverse(s.begin(),s.end());
		for(int i=0; i<ls; i++)
		{
			if(s[i] == '0')
			{
				if(!flag)
					continue;
			}
			flag = 1;
			cout<<s[i];
		}
		if(!flag)
			cout<<"0";
		cout<<endl;
	}
	else if(a == 2)
	{
		for(int i=0; i<ls; i++)
		{
			if(s[i] == '.')
			{
				l = i;
				break;
			}
		}
		reverse(s.begin(), s.begin()+l);
		reverse(s.begin()+l+1, s.end());
		for(int i=0; i<l; i++)
		{
			if(s[i] == '0')
			{
				if(!flag)
					continue;
			}
			flag = 1;
			cout<<s[i];
		}
		if(!flag)
			cout<<"0";
		int f = 0;
		while(s[ls-1] == '0')
		{
			ls--;
			if(ls <= l+1)
			{
				f = 1;
				cout<<".0"<<endl;
				break;
			}
		}
		if(!f)
		{
			for(int i=l; i<ls; i++)
				cout<<s[i];
			cout<<endl;
		}
	}
	else if(a == 3)
	{
		for(int i=0; i<ls; i++)
		{
			if(s[i] == '/')
			{

				l = i;
			}

		}
		reverse(s.begin(), s.begin()+l);
		reverse(s.begin()+l+1, s.end());
		for(int i=0; i<l; i++)
		{
			if(s[i] == '0')
			{
				if(!flag)
					continue;
			}
			flag = 1;
			cout<<s[i];
		}
		if(!flag)
			cout<<"0";
		cout<<"/";
		flag = 0;
		for(int i=l+1; i<ls; i++)
		{
			if(s[i] == '0')
			{
				if(!flag)
					continue;
			}
			flag = 1;
			cout<<s[i];
		}
		if(!flag)
			cout<<"0";
		cout<<endl;
	}
	else if(a == 4)
	{
		reverse(s.begin(), s.end()-1);
		for(int i=0; i<ls-1; i++)
		{
			if(s[i] == '0')
			{
				if(!flag)
					continue;
			}
			flag = 1;
			cout<<s[i];
		}
		if(!flag)
			cout<<"0%";
		cout<<endl;
	}
	return 0;
}

