#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i, b, c=0, e=0;
	string a;
	while(cin>>a)
	{
		b=a.length();
		for(i=b-1; ; i--)
		{
			if(a[i]=='*')
			{
				c++;
			}
			else
			{
				break;
			}
		}
		for(i=0; i<b-c-e; i++)
		{
			if(a[i]=='*')
			{
				a.erase(i,1);
				i--;
				e++;
			}
		}
		cout<<a<<endl;
		c=0;
		e=0;
	}
}
