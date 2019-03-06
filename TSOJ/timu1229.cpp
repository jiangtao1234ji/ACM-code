#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, i;
	int a[1000000];
	while(cin>>n)
	{
		for(i=0; i<n; i++)
		{
			cin>>a[i];	
		} 
		sort(a, a+n);
		cout << a[n-1] << endl;
	}
	return 0;
}
