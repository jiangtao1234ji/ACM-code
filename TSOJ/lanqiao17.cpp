#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int b;
		vector<int> a;
		for(int i=0; i<n; i++)
		{
			cin>>b;
			a.push_back(b);
		}
		sort(a.begin(),a.end());
		for(int i=0; i<n; i++)
		{
			if(i!=n-1)
				cout<<a[i]<<" ";
			else
				cout<<a[i]<<endl;
		}
	}
	return 0;
}

