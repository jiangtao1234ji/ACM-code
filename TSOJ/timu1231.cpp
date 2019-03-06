#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
	string a;
	int i, b, count=0;
	while(cin>>a)
	{
		sort(a.begin(),a.end());
		b=a.length();
		for(i=0; i<b; i++)
		{
			if(a[i]==a[i+1])
			{
				count++;
			}
			else
			{
				if(count==0)
				{
					cout<<a[i];
				}
				else
				{
					count=0;
				}
			}
		}
		cout<<endl;
	}
}
