#include<iostream>
using namespace std;
int main()
{
	long n, k, i, j, max=0, sum=0;
	long a[100000];
	while(cin>>n)
	{
		for(i=0; i<n; i++)
		{
			cin>>k;
			for(j=0; j<k; j++)
			{
				cin>>a[j];
				if(max<a[j])
				{
					max=a[j];
				}
			}
			sum+=max;
			max=0;
		}
		cout << sum << endl;
		sum=0;
	}
}
