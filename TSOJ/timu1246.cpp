#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	double a, b, c;
	while(cin>>a>>b>>c)
	{
		double s;
		double p;
		if(a<=0||b<=0||c<=0)
			cout<<"0"<<endl;
		else if(a+b>c&&b+c>a&&a+c>b)
		{
			p=(a+b+c)/2;
			s=(double)sqrt(p*(p-a)*(p-b)*(p-c));
			printf("%.4f\n",s);
		}
		else
			cout<<"0"<<endl;
	}
	return 0;
}

