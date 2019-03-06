#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n, b;
	vector<int> a;
	while(cin>>n)
	{
		for(int i=0; i<n; i++)
		{
			int sum=0, num=0;
			for(int j=0;; j++)
			{
				cin>>b;
				if(b==-1)
					break;
				else
					a.push_back(b);
				num++;
			}
			sort(a.begin()+3,a.end());
			sum=a[0]+a[1]+a[2]+a[num-3]+a[num-2]+a[num-1];
			cout<<sum<<endl;
			a.clear();
		}
	}
	
	return 0;
}

