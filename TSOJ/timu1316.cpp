#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int count=0;
		int b, c;
		vector<int> a;
		for(int i=0; i<n; i++)
		{
			cin>>b;
			a.push_back(b);
		}
		for(int i=0; i<n-1; i++)
		{
			if(a[i]>=a[i+1])
				count++;
			if(a[i]<a[i+1])
			{
				c=i+1;
				break;
			}
		}
		for(int i=c; i<n-1; i++)
		{
			if(a[i]<=a[i+1])
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}

