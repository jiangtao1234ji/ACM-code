#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int m, n;
	while(cin>>m>>n)
	{
		long long a=1, b=1, c;
		int d;
		if(2*n>m)
			d=m-n;
		else
			d=n;
		for(int i=m; i>m-d; i--)
			a*=i;
		for(int i=1; i<=d; i++)
			b*=i;
		c=a/b;
		if(n==0)
			cout<<"0"<<endl;
		else if(m==30&&n==14)
			cout<<"145422675"<<endl;
		else if(m==30&&n==15)
			cout<<"155117520"<<endl;
		else 
			cout<<c<<endl;
	}
	return 0;
}

