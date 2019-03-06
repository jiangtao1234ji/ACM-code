#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	cin>>s;
	for(int i=0; i<s.length(); i++)
	{
		s[i] = (s[i] - 'a' + n) % 26 + 'a';
	}
	cout<<s<<endl;
	return 0;
}

