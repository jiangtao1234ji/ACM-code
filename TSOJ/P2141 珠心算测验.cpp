#include<iostream>
#include<string>
#include<algorithm>
#define maxn 200

using namespace std;

int a[maxn], b[maxn];

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int ans = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i] != a[j])
			{
				int sum = a[i] + a[j];
				if(!b[sum])
				{
					b[sum] = 1;
					for(int k= j+1; k<n; k++)
					{
						if(sum == a[k])
						{
							ans++;
							break;
						}
						if(sum < a[k])
							break;
					}
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

