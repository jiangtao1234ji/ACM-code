#include<iostream>
using namespace std;
int main()
{
	int a, b, i, max1, max;
	while(cin>>a>>b)
	{
		for(i=1; i<=a; i++)
		{
			if(a%i==0)
			{
				max1=i;
				if(b%max1==0)
				{
					max=max1;
				}
			}
		}
		cout << a/max << ' ' << b/max << endl;
	}
	return 0;
}
