#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a, b;
	char c;
	int n;
	while(cin>>n)
	{
	
		while(n--)
		{
			cin>>a>>c>>b;
			switch(c)
			{
				case '+':
					cout<<a+b<<endl;
					break;
				case '-':
					cout<<a-b<<endl;
					break;
				case '*':
					cout<<a*b<<endl;
					break;
				case '/':
					cout<<a/b<<endl;
					break;
			}
		}
	}
	return 0;
}
