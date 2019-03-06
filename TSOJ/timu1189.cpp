#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int cmp(int a,int b)
{
	return a>b;
}
int main()
{
	vector<int> a;
	int b;
	while(1)
	{
		int b, c, count=0;
		cin>>b;
		if(b==-1)
			break;
		a.push_back(b);
		while(b)
		{
			cin>>b;
			if(b==0)
				break;
			a.push_back(b);
		}
		c=a.size();
		sort(a.begin(),a.end(), cmp);
		for(int i=1; i<c; i++)
		{
			for(int j=i; j<c; j++)
			{
				if(a[i-1]==2*a[j])
					count++;
			}
		}
		cout<<count<<endl;
		count=0;
		a.clear();
	}
	return 0;
}

