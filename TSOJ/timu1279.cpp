#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	while(cin>>t)
	{
		for(int i=0; i<t; i++)
		{
			int l, n, b, minn=0, maxn=0, temp;
			cin>>l>>n;
			for(int i=0; i<n; i++)
			{
				cin>>b;
				temp=max(b,l-b);
				maxn=max(maxn,temp);
				minn=max(minn,l-temp);
			}
			cout<<minn<<" "<<maxn<<endl;
		}
	}
	return 0;
}

