#include <iostream>

using namespace std;

int main()
{
	for(int i=0; i<=31; i++)
	{
		int a[5]= {0};
		int num=i;
		int z=0;
		while(num!=0)
		{
			a[z]=num%2;
			z++;
			num/=2;
		}
		for(int j=4; j>=0; j--)
			cout<<a[j];
		cout<<endl;
	}
	return 0;
}
