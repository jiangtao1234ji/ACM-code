#include<iostream>
#include<string>
#include<algorithm>
#define maxn 60

using namespace std;

string a[maxn];


int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; ++i)
	{
		cin>>a[i];
	}
	int len = a[0].size();
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			a[i][len+j] = a[i][j];
		}
	}
	int count=0, minx=100000;
	int flag=0;
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			for(int m=0; m<len; ++m)
			{
				if(a[i][j] == a[j][m])
					count++;
			}
			if(count >= 1)
			{
				count = 0;
			}
			else
			{
				flag = 1;
				break;
			}
		}
		if(flag)
		{
			cout<<"-1"<<endl;
			break;
		}
	}
	if(!flag)
	{
		for(int i=0; i<n; ++i)
		{
			for(int j=0; j<n; ++j)
			{
				for(int m=0; m<len; ++m)
				{
					int ix = 0;
					for(int k=0; k<len; ++k)
					{
						if(a[i][k] != a[j][ix+k])
						{
							ix++;
							count++;
							break;
						}
					}
				}
			}
			if(minx > count)
			{
				minx = count;
				count = 0;
			}
		}
		cout<<minx<<endl;
	}
	return 0;
}

