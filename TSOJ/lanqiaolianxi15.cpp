#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	for(int i=1000; i<10000; i++)
	{
		int a, b, c, d, e;
		e=i;
		a=e%10;
		e/=10;
		b=e%10;
		e/=10;
		c=e%10;
		e/=10;
		d=e%10;
		e/=10;
		if(d==c&&a==b)
			if((double)sqrt(i)==(int)sqrt(i))
				cout<<i;
	}
	return 0;
}

