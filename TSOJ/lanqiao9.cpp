#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	int a[1100];
	while(cin>>n)
	{
		int count=0;
		for(int i=1; i<=n; i++)
		{
			cin>>a[i];
		}
		cin>>m;
		for(int i=1; i<=n; i++)
		{
			if(a[i]==m)
			{
				cout<<i<<endl;
				count++;
				break;
			}
		}
		if(count==0)
			cout<<"-1"<<endl;
	}
	return 0;
}

