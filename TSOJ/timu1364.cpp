#include <iostream>
#include <algorithm>
using namespace std;
int a[1001000];
int main()
{
	int n, i, count=1;
	while(cin>>n)
	{
		for(i=1; i<=n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n+1);
		for(i=1; i<=n; i++)
		{
			if(a[i]==a[i+1])
			{
				count+=1;
			}
			if(a[i]!=a[i+1])
			{
				cout<<a[i]<<' '<<count<<endl;
				count=1;
			}
			
		}
		count=1;
	}
}
