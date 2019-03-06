#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	int a[10000];
	while(cin>>n)
	{
		int j=0, num1=0, num0=0;
		while(n)
		{
			a[j++]=n%2;
			n/=2;
		}
		for(int i=0; i<j; i++)
		{
			if(a[i]==1)
				num1++;
			else
				num0++;
		}
		cout<<num1<<endl;
		cout<<num0<<endl;
	}
	return 0;
}

