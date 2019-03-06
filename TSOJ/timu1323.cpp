#include<iostream>
using namespace std;
int main()
{
	int n, i;
	long a[25];
	while(cin>>n)
	{
		a[0]=1;
		a[1]=2;
		for(i=2; i<n; i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
		cout << a[n-1] << endl;
	}
	return 0;
}
