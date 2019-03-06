#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		vector<int> a;
		int b;
		for(int i=0; i<n; ++i)
		{
			cin>>b;
			a.push_back(b);
		}
		sort(a.begin(),a.end());
		if(n%2==1)
			cout<<a[n/2]<<endl;
		else
			cout<<a[n/2-1]<<endl;
	}
	return 0;
}

