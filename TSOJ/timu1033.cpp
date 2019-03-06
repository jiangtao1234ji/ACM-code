#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n;
	vector<int> a;
	while(cin>>n)
	{
		int m;
		for(int i=0; i<n; i++)
		{
			cin>>m;
			a.push_back(m);
		}
		sort(a.begin(),a.end());
		for(int i=0; i<n; i++)
		{
			if(i<n-1)
				cout<<a[i]<<" ";
			else
				cout<<a[i]<<endl;
		}
	}
	return 0;
}

