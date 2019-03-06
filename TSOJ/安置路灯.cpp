#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	int n;
	char a[1001];
	while(cin>>t)
	{
		for(int i=0; i<t; i++)
		{
			int count=0;
			cin>>n;
			for(int j=0; j<n; j++)
			{
				cin>>a[j];
			}
			for(int j=0; j<n; j++)
			{
				if(a[j]=='.')
				{
					count++;
					j+=2;
				}
			}
			cout<<count<<endl;
		}
	}
	return 0;
}

