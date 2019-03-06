#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string a;
	while(cin>>a)
	{
		int b=a.length();
		char c[10000];
		int num=0;
		for(int i=0; i<b; i++)
		{
			if(a[i]==a[i+1])
				c[num++]=a[i];
			else
			{

				break;
			}
		}
		for(int i=num; i<b; i++)
		{
			if(a[i]!='*')
				c[num++]=a[i];
		}
		for(int i=0; i<num; i++)
		{
			if(i!=num-1)
				cout<<c[i];
			else
				cout<<c[i]<<endl;
		}
	}
	return 0;
}

