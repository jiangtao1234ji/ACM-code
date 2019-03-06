#include<iostream>
#include<string>
#include<algorithm>
#include<stack>

using namespace std;

bool match(string str)
{
	stack<char> s;
	int i;
	for (i = 0; i < str.size(); ++i)
	{
		if (str[i] == '(')
		{
			s.push(str[i]);
			continue;
		}
		if (str[i] == '{')
		{
			s.push(str[i]);
			continue;
		}
		if (str[i] == ')')
		{
			if (!s.empty() && s.top() == '(')
			{
				s.pop();
				continue;
			}
		}
		if (str[i] == '}')
		{
			if (!s.empty() && s.top() == '{')
			{
				s.pop();
				continue;
			}
		}
	}

	if (!s.empty())
	{
		while( !s.empty() )
			s.pop();
		return false;
	}
	return true;
}
int main()
{
	int n;
	string b;
	string a;
	while(cin>>n)
	{
		getchar();
		while(n--)
		{
			getline(cin,a);
			string::iterator it = a.begin();
			while((it=find(it, a.end(), ' '))!=a.end())
			{
				a.erase(it);
				if (it == a.end())
					break;
			}
			if(match(a))
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;

		}
	}
	return 0;
}

