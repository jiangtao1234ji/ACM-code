#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{

		for(int i= n-1; i>=0; i++)
		{
			for(int j=0; j<=i-1; ++j)
			{
				if(a[i] > a[j])
				{
					int temp = a[j];
					a[j] = a[i];
					a[i] = temp;
				}
			}
		}
	}
	return 0;
}

