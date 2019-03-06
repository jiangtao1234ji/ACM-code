#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	string a, b;
	cin>>a>>b;
	long long ans=1, sum=1;
	int la = a.length();
	int lb = b.length();
	for(int i=0; i<la; i++)
	{
		ans*=(a[i]-'A' + 1);
	}
	for(int i=0; i<lb; i++)
	{
		sum*=(b[i]-'A' + 1);
	}
	if(ans%47 == sum%47)
		cout<<"GO"<<endl;
	else
		cout<<"STAY"<<endl;
	return 0;
}

