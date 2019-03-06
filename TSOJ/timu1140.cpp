#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string x;
	string y;
	long long a, b;
	int n;
	while(cin>>x)
	{
		int count=0;
		n=x.length();
		a = atoi(x);
		for(int i = 1; i<=n; i++)
		{
			b=a*i;
			char buffer[256];
			sprintf(buffer,"%lld", b);
			string y = string(buffer);
			if(sort(y.begin(),y.end())==sort(x.begin(),x.end()))
			{
				count++;
			}
		}
		if(count==n)
		{
			cout<<x<<"is cyclic"<<endl;
		}
		else
		{
			cout<<x<<"is not cyclic"<<endl;
		}
	}

}
