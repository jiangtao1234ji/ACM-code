#include<iostream>

using namespace std;

long long fun1(long long xx,long long yy)
{
	long long all;
	all=yy/2018-xx/2018;
	if(xx>=2018&&yy>=2018)
	{
		if(xx%2018==0&&yy%2018==0)
			all++;
		else if(xx%2018==0&&yy%2018!=0)
			all++;
	}
	return all;
}

long long fun2(long long xx,long long yy,long long all_of_2018)
{
	long long all;
	all=yy/1009-xx/1009;
	if(yy>=1009&&xx>=1009)
	{
		if(xx%1009==0&&yy%1009==0)
			all++;
		else if(xx%1009==0&&yy%1009!=0)
			all++;
	}
	return all-all_of_2018;
}

int main()
{
	long long a,b,c,d;
	while(cin>>a>>b>>c>>d)
	{
		long long x1,y1,x,y,all1,all2,val;
		x1=fun1(a,b);
		y1=fun1(c,d);
		x=fun2(a,b,x1);
		y=fun2(c,d,y1);
		all1=(b-a+1)/2;
		all2=(d-c+1)/2;
		if((b==a&&b%2==0)||(b%2==0&&a%2==0))
			all1++;
		if((c==d&&c%2==0)||(d%2==0&&c%2==0))
			all2++;
		val=x*all2+x1*(d-c+1)+y*all1+y1*(b-a+1)-x1*y1-y*x1-x*y1;
		cout<<val<<endl;
	}
	return 0;
}
