#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n, m;
	while(cin>>n)
	{
		cin>>m;
		vector<int> v;
		int v1;
		for(int i=0; i<m; i++)
		{
			cin>>v1;
			v.push_back(v1);
		}
		sort(v.begin(),v.end(),cmp);
		for(int i=0; i<m; i++)
		{
			if(n-v[i]>=0)
			{
				n-=v[i];
			}
		}
		cout<<n<<endl;
	}
	return 0;
}

