#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int a=n-1;
		for(int i=0; i<n; i++)
		{
			int c=i;
			for(int j=i; j<n; j++)
			{
				if(c>0)
				{
					for(int d=1; d<c+1; d++)
						cout<<d<<" ";
					c=0;
				}
				if(j!=n-1)
					cout<<n-a<<" ";
				else
					cout<<n-a<<endl;
			}
			a-=1;
		}
	}
	return 0;
}

