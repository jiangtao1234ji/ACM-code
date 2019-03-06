#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int a[n], exchange = 0;
		for(int i=0; i<n; ++i)
			cin>>a[i];
		for(int i= n-1; i>0; i--)
		{
			exchange = 0;
			for(int j=0; j<=i-1; ++j)
			{
				if(a[i] > a[j])
				{
					int temp = a[j];
					a[j] = a[i];
					a[i] = temp;
					exchange = 1;
				}
			}
			if(exchange == 0) 
				break;
		}
	}
	return 0;
}

