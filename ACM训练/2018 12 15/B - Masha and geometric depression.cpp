#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#define maxn 100100

using namespace std;

long long a[maxn];
map<int, int> s;

int main()
{
	long long b1, q, l, m;
	cin>>b1>>q>>l>>m;
	for(int i=1; i<=m; i++)
	{
		scanf("%lld", &a[i]);
		s[a[i]]++;
	}
	if(abs(b1)>l)
		cout<<"0"<<endl;
	else if(b1 == 0)
	{
		if(s[0] > 0)
			cout<<"0"<<endl;
		else
			cout<<"inf"<<endl;
	}
	else if(q == 0)
	{
		if(s[b1] > 0 && s[0] > 0)
			cout<<"0"<<endl;
		else if(s[0] > 0 && s[b1] == 0)
			cout<<"1"<<endl;
		else
			cout<<"inf"<<endl;

	}
	else if(q == 1)
	{
		if(s[b1] > 0)
			cout<<"0"<<endl;
		else
			cout<<"inf"<<endl;
	}
	else if(q==-1)
	{
		if(s[b1] >0 && s[-b1] > 0)
			cout<<"0"<<endl;
		else
			cout<<"inf"<<endl;
	}
	else
	{
		int count = 0, sub = 0;
		while(abs(b1) <= l)
		{
			count++;
			if(s[b1] > 0)
				sub++;
			b1*=q;
		}
		cout<<count - sub<<endl;
	}
	return 0;
}

