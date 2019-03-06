#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int a[200005];
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0; i<n+1; i++)
		{
			cin>>a[i];	
		}
		long long b=0;
		int c=n+1;
		while(b<c)
		{
			b+=a[--c];
		}
		cout<<c<<endl;
	}
	return 0;
}

