#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int n, m, c;
	while(cin>>n>>m>>c)
	{
		vector<int> a;
		vector<int> b;
		int a1, b1;
		int count=0;
		for(int i=0; i<m; i++)
		{
			cin>>a1;
			a.push_back(a1);
		}
		for(int i=0; i<n; i++)
		{
			cin>>b1;
			b.push_back(b1);
		}
		for(int i=0; i<a.size(); i++)
		{
			for(int j=0; j<b.size(); j++)
			{
				if(abs(a[i]-b[j])<c||sqrt(a[i]-b[j])==c)
				{
					count++;
					a.erase(a.begin()+i);
					b.erase(b.begin()+j);
					break;
				}
			}
		}
		cout<<count<<endl;
		a.clear();
		b.clear();
	}
	return 0;
}

