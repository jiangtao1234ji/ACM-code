#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int b, sum=0;
		vector<int> a;
		for(int i=0; i<n; i++)
		{
			cin>>b;
			a.push_back(b);
		}
		sort(a.begin(),a.end());
		for(int i=0; i<n; i++)
		{
			sum+=a[i];
		}
		cout<<a[n-1]<<endl;
		cout<<a[0]<<endl;
		cout<<sum<<endl;
	}
	return 0;
}

