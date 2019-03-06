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
		vector<int> a;
		int b;
		while(n--)
		{
			cin>>b;
			a.push_back(b);
		}
		stable_sort(a.begin(),a.end());
		cout<<a[0]<<endl;
	}
	return 0;
}
