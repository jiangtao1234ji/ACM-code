#include<iostream>
#include<algorithm>
#include<stack>
#include<cstdlib>
#include<vector>
#include<string>

using namespace std;

bool check = false;

string format(string str)
{
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] == '-')
		{
			if(i == 0)
				str.insert(0,1,'0');
			else if(str[i-1] == '(')
				str.insert(i,1,'0');
		}
	}
	return str;
}

int prior(char c)
{
	if(c == '+' || c == '-')
		return 1;
	else if(c == '*' || c == '/')
		return 2;
	else
		return 0;
}

vector<string> hz(string str)
{
	vector<string> vs;
	stack<char> st;
	for(int i = 0; i < str.length(); i++)
	{
		string tmp = "";
		switch(str[i])
		{
			case '+':
			case '-':
			case '*':
			case '/':
				if(st.empty() || st.top() == '(')
					st.push(str[i]);
				else
				{
					while(!st.empty() && prior(st.top()) >= prior(str[i]) )
					{
						tmp += st.top();
						vs.push_back(tmp);
						st.pop();
						tmp = "";
					}
					st.push(str[i]);
				}
				break;
			case '(':
				if(str[i+1] == '(')
				{
					check = true;
					cout<<"None"<<endl;
					break;
				}
				else if(str[i+1] == ')')
				{
					check = true;
					cout<<"None"<<endl;
					break;
				}
				if(i>0)
				{
					if((str[i-1]>='0' && str[i-1]<='9'))
					{
						check = true;
						cout<<"None"<<endl;
						break;
					}
				}
				st.push(str[i]);
				break;
			case ')':
				if(str[i+1] == ')')
				{
					check = true;
					cout<<"None"<<endl;
					break;
				}
				else if(str[i+1] == '(')
				{
					check = true;
					cout<<"None"<<endl;
					break;
				}
				else if((str[i+1]>='0' && str[i+1]<='9'))
				{
					check = true;
					cout<<"None"<<endl;
					break;
				}
				while(st.top() != '(')
				{
					tmp += st.top();
					vs.push_back(tmp);
					st.pop();
					tmp = "";
				}
				st.pop();
				break;
			default:
				if((str[i]>='0' && str[i]<='9'))
				{
					tmp += str[i];
					while(i+1<str.size() && str[i+1]>='0' && str[i+1]<='9'||str[i+1] == '.')
					{
						tmp += str[i+1];
						++i;
					}
					vs.push_back(tmp);
				}
		}
		if(check)
			break;
	}
	while(!st.empty())
	{
		string tmp = "";
		tmp += st.top();
		vs.push_back(tmp);
		st.pop();
	}
	return vs;
}

int result(vector<string> bh)
{
	stack<int> st;
	int num,op1,op2;
	for(int i = 0; i < bh.size(); i++)
	{
		string tmp = bh[i];
		if(tmp[0] >= '0'&&tmp[0] <= '9')
		{
			num = atof(tmp.c_str());
			st.push(num);
		}
		else if(bh[i]=="+")
		{
			op2=st.top();
			st.pop();
			if(st.empty())
			{
				cout<<"None"<<endl;
				check = true;
				break;
			}
			op1=st.top();
			st.pop();
			st.push(op1+op2);
		}
		else if(bh[i]=="-")
		{
			op2=st.top();
			st.pop();
			if(st.empty())
			{
				cout<<"None"<<endl;
				check = true;
				break;
			}
			op1=st.top();
			st.pop();
			st.push(op1-op2);
		}
		else if(bh[i]=="*")
		{
			op2=st.top();
			st.pop();
			if(st.empty())
			{
				cout<<"None"<<endl;
				check = true;
				break;
			}
			op1=st.top();
			st.pop();
			st.push(op1*op2);
		}
		else if(bh[i]=="/")
		{
			op2=st.top();
			st.pop();
			if(st.empty())
			{
				cout<<"None"<<endl;
				check = true;
				break;
			}
			op1=st.top();
			st.pop();
			if(op2 == 0)
			{
				cout<<"None"<<endl;
				check = true;
				break;
			}
			st.push(op1/op2);
		}
		else
		{
			cout<<"None"<<endl;
			check = true;
			break;
		}
	}
	if(check)
		return 0;
	return st.top();
}

void solve(string str)
{
	str = format(str);
	vector<string> bh = hz(str);
	if(check)
	{
		check = false;
		return;
	}
	int k = result(bh);
	if(check)
	{
		check = false;
		return;
	}
	cout<<k<<endl;
}

int main()
{
	string str;
	while(getline(cin,str))
	{
		solve(str);
	}
}

