#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool shusu(int n)
{
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}

bool fun(int n, int count)
{
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0)
		{
			int a;
			a=n/i;
			if(shusu(i))
				if(shusu(a))
				{
					count++;
					if(count==1)
						return true;	
				}
		}
	}
	return false;
}
int main()
{
	int n;
	while(cin>>n)
	{
		int count=0;
		if(fun(n,count))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}

