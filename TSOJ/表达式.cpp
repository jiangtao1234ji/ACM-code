#include<iostream>
#include<string>
#include<stack>
using namespace std;
double cla(char ch, double a,double b )
{
	if(ch=='+')
		return a+b;
	else if (ch=='-')
		return a-b;
	else if (ch=='*')
		return a*b;
	else if (b!=0&&(ch=='/'))
		return a/b;
}

int prior(char c)
{
	if(c == '+' || c == '-')
		return 1;
	else if(c == '*' || c == '/')
		return 2;
	else
		return 3;
}

void fun(stack <char> &ch, stack <double> &num)
{
	double a, b;
	b = num.top();
	num.pop();
	a = num.top();
	num.pop();
	a = cla(ch.top(), a, b);
	ch.pop();
	num.push(a);
}

int main()
{
	string a;
	stack <char> ch;
	stack <double> num;
	cin>>a;
	for(int i=a.size()-1; i>=0; i--)
	{
		if(a[i]==')')
			ch.push(a[i]);
		else if (a[i]>='0'&&a[i]<='9')
			num.push(a[i]-'0');
		else if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/')
			ch.push(a[i]);
		else if(a[i]=='(')
			ch.push(a[i]);
	}
	while(num.size() != 1)
	{
		stack <char> ch1 = ch;
		stack <double> num = num;
		while(!ch1.empty())
		{

			while(ch1.top() != ')')
			}
	}
	cout<<num.top()<<endl;
	num.pop();
	return 0;


}
