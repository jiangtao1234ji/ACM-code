#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	string a;
	cin>>a;
	if(a[0] == '-')
	{
		reverse(a.begin()+1, a.end());

	}
	else
	{

		reverse(a.begin(), a.end());
	}
	int flag = 0;
	return 0;
}

