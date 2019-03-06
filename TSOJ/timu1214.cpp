#include<iostream>
using namespace std;
int main()
{
	int n, i, count=0;
	long long m[100];
	while(cin>>n)
	{
		if(count>0)
		{
			cout<<endl;
		}
		for(i=10000; i<100000; i++)
		{
			int a,b,c,d,e;
			a=i/10000;
			b=(i-a*10000)/1000;
			c=(i-a*10000-b*1000)/100;
			d=(i-a*10000-b*1000-c*100)/10;
			e=(i-a*10000-b*1000-c*100-d*10);
			if(a==e&&b==d)
			{
				if((a+b+c+d+e)==n)
				{
					cout<<i<<endl;
				}
			}
		}
		for(i=100000; i<1000000; i++)
		{
			int a,b,c,d,e,f;
			a=i/100000;
			b=(i-100000*a)/10000;
			c=(i-100000*a-10000*b)/1000;
			d=(i-100000*a-10000*b-1000*c)/100;
			e=(i-100000*a-10000*b-1000*c-100*d)/10;
			f=i-100000*a-10000*b-1000*c-100*d-10*e;
			if(a==f&&b==e&&c==d)
			{
				if((a+b+c+d+e+f)==n)
				{
					cout<<i<<endl;
				}
			}
		}
		count++;
	}
	return 0;
}
