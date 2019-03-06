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
		int m;
		vector<long long> a;
		vector<int> b;
		while(n--)
		{
			a.clear();
			b.clear();
			int num=0, numi, numj=0, count=0;
			cin>>m;
			for(int i=0; i<m; ++i)
			{
				cin>>numi;
				a.push_back(numi);
			}
			sort(a.begin(), a.end());
			for(int i=0; i<a.size()-1; ++i)
			{
				if(a[i]==a[i+1])
					count++;
			}
			if(2*count-1  == a.size())
			{
				cout<<a.size()<<endl;
				continue;
			}
			for(int i=0; i<a.size(); ++i)
			{
				int temp =a[i];
				while(temp)
				{
					temp/=2;
					numj++;
				}
				b.push_back(numj-1);
				numj=0;
			}
			for(int i=0; i<b.size()-1; ++i)
			{
				if(abs(b[i]-b[i+1]) <= 1)
				{
					b.erase(b.begin()+i,b.begin()+(i+1));
					num+=2;
				}
			}
			cout<<num<<endl;
			num=0;
			b.clear();
			a.clear();
		}
	}
	return 0;
}

