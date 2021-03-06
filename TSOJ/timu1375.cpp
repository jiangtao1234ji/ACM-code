#include<iostream>
#include<string>
#include<algorithm>
#include<stack>

using namespace std;

string fun()
{
	stack<char>s;
	char c;
	string str;
	cin >> c;
	while (c != '\n')
	{
		if (c >= 'a'&&c <= 'z')
			cout <<"None"<<endl;
		else
			switch (c)
			{
				case ')':
					while (!s.empty() && s.top() !='(')
					{
						str.push_back(s.top());
						s.pop();
						//cout << s.top() << " "; s.pop();
					}
					s.pop();
					break;
				case'(':
					s.push(c);
					break;
				case'*':
				case'/':
					while (!s.empty() && s.top() != '+'&&s.top() != '-'&&s.top() != '(')
					{
						str.push_back(s.top());
						s.pop();
					}
					s.push(c);
					break;
				case'+':
				case'-':
					while (!s.empty() && s.top() != '(')
					{
						str.push_back(s.top()) ;
						s.pop();
					}
					s.push(c);
					break;
				default:
					s.push(c);
					break;

			}
		c=getchar();
	}
	while (!s.empty())
	{
		str.push_back(s.top());
		s.pop();
	}
	str.push_back('\n');
	/*for(int i=0; i<str.size(); ++i)
		cout<<str[i];
	cout<<endl;*/ 
	return str;
}

int solve(string token)
{
	stack<int> s;
	int a, b, result;
	int i = 0;
	while (token[i]!='\n')
	{
		int count=0;
		for(; i<token.size(); ++i)
		{
			if(token[i]!='+'&&token[i]!='-'&&token[i]!='*'&&token[i]!='/'&&token[i]!='('&&token[i]!=')')
				count++;
			else
				break;
		}
		int result=0;
		if(count!=0)
		{
			int m=count;
			for(int j=i; j<i+count; ++j)
			{
				result+=token[i]*pow(10,m);
				m--;
			}
			s.push(result);
		}
		else
			switch (token[i])
			{
				case '+':
					a = s.top();
					s.pop();
					b = s.top();
					s.pop();
					s.push(a + b);
					break;
				case' - ':
					a = s.top();
					s.pop();
					b = s.top();
					s.pop();
					s.push(a - b);
					break;
				case'*':
					a = s.top();
					s.pop();
					b = s.top();
					s.pop();
					s.push(a * b);
					break;
				case'/':
					a = s.top();
					s.pop();
					b = s.top();
					s.pop();
					s.push(a / b);
					break;
				default:
					cout << "None"<<endl;
			}

		i+=count;

	}
	return s.top();
}

int main()
{
	solve(fun());
	return 0;
}

