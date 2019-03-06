#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a, b, c, d, i;
	for(i=100; i<1000; i++)
	{
		d=i;
		a=d%10;
		d/=10;
		b=d%10;
		d/=10;
		c=d%10;
		d/=10;
		if(i==a*a*a+b*b*b+c*c*c)
			cout<<i<<endl;
	}
	return 0;
}

