#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		string a = "11";
		for(int i=0; i<n; ++i)
		{
			a += '11';
		}	
		cout<<a<<endl;
	} 
	return 0;
}

