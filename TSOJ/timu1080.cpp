#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a, b, c, d;
	for(int i=100; i<1000; i++)
	{
		d=i;
		a=d%10;
		b=(d/10)%10;
		c=d/100;
		if(a*a*a+b*b*b+c*c*c==i)
			cout<<i<<endl;
	}
	return 0;
}

