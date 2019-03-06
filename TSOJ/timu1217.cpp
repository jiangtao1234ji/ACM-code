#include<iostream>
using namespace std;
int main()
{
	long long a[10];
	int i=0;
	long long sum=0;
	while(cin>>a[0])
	{
		for(i=1; i<10; i++)
		{
			cin>>a[i];
		}
		for(i=0; i<10; i++)
		{
			sum+=a[i];
		}
		cout << sum << endl;
		sum=0;
	}
	return 0;
}

