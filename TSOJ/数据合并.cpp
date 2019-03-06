#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n, m;
	int a[200], b[200];
	vector<int> c;
	while(cin>>n>>m)
	{
		for(int i=0; i<n; ++i)
			cin>>a[i];
		for(int i=0; i<m; ++i)
			cin>>b[i];
		for(int i=0; i<n; ++i)
			c.push_back(a[i]);
		for(int i=0; i<m; ++i)
			c.push_back(b[i]);
		sort(c.begin(),c.end());
		int d=c.size();
		for(int i=0; i<d; ++i)
		{
			if(i<d-1)
				cout<<c[i]<<" ";
			else
				cout<<c[i];
		}
	}
	return 0;
}

