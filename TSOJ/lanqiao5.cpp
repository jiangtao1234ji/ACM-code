#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n%4==0&&n%100!=0)
			cout<<"yes"<<endl;
		else if(n%400==0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}

