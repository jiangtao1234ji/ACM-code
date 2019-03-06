#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(string a)
{

}
int main()
{
	int n, num, begin, end;
	string a;
	string b;
	while(cin>>n)
	{
		for(int i=0; i<n; i++)
		{
			cin>>a;
			cin>>b;
			num=a.length();
			for(int i=0; i<num; i++)
			{
				if(a[i]!=b[i])
				{
					begin=i;
					break;
				}
			}
			for(int i=begin+1; i<num; i++)
			{
				if(a[i]!=b[i])
				{
					end=i;
					break;
				}
			}
			cout<<end-begin<<endl;
		}
	}
	return 0;
}

