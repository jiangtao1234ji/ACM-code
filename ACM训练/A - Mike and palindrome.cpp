#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	string a;
	cin>>a;
	int len = a.size();
	if(len%2==0)
	{
		int mid = len/2;
		int count = 0;
		for(int i=0; i<mid; ++i)
		{
			if(a[i] == a[len-i-1])
				count++;
		}
		if(abs(mid - count) == 1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else
	{
		int mid = len/2;
		int count = 0;
		for(int i=0; i<mid; ++i)
		{
			if(a[i] == a[len-i-1])
				count++;
		}
		if(abs(mid - count) == 0||abs(mid - count) == 1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}

