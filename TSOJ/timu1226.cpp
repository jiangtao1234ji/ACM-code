#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		string a[n];
		string b;
		for(int i=0; i<n; ++i)
		{
			cin>>a[i];
		}
		for(int i=0; i<n-1; ++i)
		{
			for(int j=0; j<n-1; ++j)
			{
				if(a[j]<a[j+1])
				{
					string c;
					c=a[j+1];
					a[j+1]=a[j];
					a[j]=c;
				}
			}
		}
		for(int i=0; i<n; ++i)
			b+=a[i];
		for(int i=0; i<b.size(); ++i)
			cout<<b[i];
		cout<<endl;
	}
	return 0;
}

