#include<iostream>
#include<string>
#include<algorithm>
#define maxn 150100

using namespace std;

int a[maxn];

int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>a[i];
	a[0] = a[n+1] = 0;
	int sum = 0;
	int flag = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!flag)
		{
			if (a[i] >= a[i - 1] && a[i] >= a[i + 1])
			{
				flag = 1;
				sum+= a[i];
			}
		}
		else
		{
			if (a[i] <= a[i - 1] && a[i] <= a[i + 1])
			{

				flag = 0;
				sum-= a[i];
			}
		}
	}
	cout << sum << endl;
	return 0;
}

