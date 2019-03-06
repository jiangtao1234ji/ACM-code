#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fun(int n)
{
	for(int i=2; i*i<=n; ++i)
		if(n%i==0)
			return 0;
	return 1;
}
int main()
{
	int count=0;
	int k;
	for(int i=2; i<10000; i++)
	{
		if(fun(i))
			for(int j=1; j<1000; j++)
			{
				for( k=1; k<=9; k++)
				{
					if(!fun(i+j*k))
						break;
				}
				if(k==10)
					cout<<j;
			}
	}
	return 0;
}
